/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface FCRestorePaidSubscriptionItem : NSObject

{
    _Bool _isNewsAppPurchase;
    NSString *_channelID;
}

@property (nonatomic, readonly) NSString *channelID;
@property (nonatomic, readonly) _Bool isNewsAppPurchase;

- (id)initWithChannelID:(id)arg1 isNewsAppPurchase:(_Bool)arg2;

@end
