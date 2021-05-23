/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/Swift-Protocol.h>

@class NSString;

@protocol FCChannelProviding;

@protocol FCPurchaseAccessCheckable <Swift>

@property (copy, nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly, getter=isPaid) _Bool paid;
@property (nonatomic, readonly, getter=isBundlePaid) _Bool bundlePaid;
@property (copy, nonatomic, readonly) id <FCChannelProviding> sourceChannel;

@end
