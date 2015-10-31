//
//  MQCellModelProtocol.h
//  MeiQiaSDK
//
//  Created by ijinmao on 15/10/29.
//  Copyright © 2015年 MeiQia Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MQChatBaseCell.h"
#import "MQChatFileUtil.h"

//#import "MQMessage.h"

//定义cell中的布局间距等
/**
 * 头像距离屏幕水平边沿距离
 */
static CGFloat const kMQCellAvatarToHorizontalEdgeSpacing = 16.0;
/**
 * 头像距离屏幕垂直边沿距离
 */
static CGFloat const kMQCellAvatarToVerticalEdgeSpacing = 16.0;
/**
 * 头像与聊天气泡之间的距离
 */
static CGFloat const kMQCellAvatarToBubbleSpacing = 8.0;
/**
 * 聊天气泡和其中的文字较大一边的水平间距
 */
static CGFloat const kMQCellBubbleToTextHorizontalLargerSpacing = 12.0;
/**
 * 聊天气泡和其中的文字较大一边的水平间距
 */
static CGFloat const kMQCellBubbleToTextHorizontalSmallerSpacing = 8.0;
/**
 * 聊天气泡和其中的文字垂直间距
 */
static CGFloat const kMQCellBubbleToTextVerticalSpacing = 8.0;
/**
 * 聊天气泡最大宽度与边沿的距离
 */
static CGFloat const kMQCellBubbleMaxWidthToEdgeSpacing = 32.0;
/**
 * 聊天头像的直径
 */
static CGFloat const kMQCellAvatarDiameter = 64.0;
/**
 * 聊天内容的文字大小
 */
static CGFloat const kMQCellTextFontSize = 15.0;
/**
 * 聊天内容间隔的时间cell高度
 */
static CGFloat const kMQChatMessageDateCellHeight = 24.0;
/**
 * 聊天内容间隔的时间fontSize
 */
static CGFloat const kMQChatMessageDateLabelFontSize = 12.0;
/**
 * 聊天内容间隔的时间距离cell两端的间距
 */
static CGFloat const kMQChatMessageDateLabelToEdgeSpacing = 16.0;
/**
 * 聊天气泡和Indicator的间距
 */
static CGFloat const kMQCellBubbleToIndicatorSpacing = 8.0;


/**
 *  cell的来源枚举定义
 *  MQCellIncoming - 收到的消息cell
 *  MQCellOutgoing - 发送的消息cell
 */
typedef NS_ENUM(NSUInteger, MQChatCellFromType) {
    MQChatCellIncoming,
    MQChatCellOutgoing
};

/**
 *  cell的发送状态
 *  MQChatCellSending       - 正在发消息
 *  MQChatCellSended        - 消息已发送
 *  MQChatCellSentFailure   - 消息发送失败
 */
typedef NS_ENUM(NSUInteger, MQChatCellSendType) {
    MQChatCellSending,
    MQChatCellSended,
    MQChatCellSentFailure
};

/**
 * MQCellModelProtocol协议定义了ChatCell的view需要满足的方法
 *
 */
@protocol MQCellModelProtocol <NSObject>

/**
 *  @return cell中的view.
 */
- (CGFloat)getCellHeight;

/**
 *  @return cell重用的名字.
 */
- (NSString *)getCellReuseIdentifier;

/**
 *  通过重用的名字初始化cell
 *  @return 初始化了一个cell
 */
- (UITableViewCell *)getCellWithReuseIdentifier:(NSString *)cellReuseIdentifer;

/**
 *  @return cell的消息时间.
 */
- (NSDate *)getCellDate;


@end
