/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/Swift-Protocol.h>

@class NSString;

@protocol SXConditionValidationContext <Swift>

@property (nonatomic, readonly) struct CGSize viewportSize;
@property (nonatomic, readonly) long long horizontalSizeClass;
@property (nonatomic, readonly) long long verticalSizeClass;
@property (nonatomic, readonly) NSString *contentSizeCategory;
@property (nonatomic, readonly) unsigned long long numberOfColumns;
@property (nonatomic, readonly) _Bool testing;
@property (nonatomic, readonly) unsigned long long viewingLocation;
@property (nonatomic, readonly, getter=isBundleSubscriber) _Bool bundleSubscriber;
@property (nonatomic, readonly, getter=isBundleTrialEligible) _Bool bundleTrialEligible;
@property (nonatomic, readonly, getter=isChannelSubscriber) _Bool channelSubscriber;
@property (nonatomic, readonly) long long userInterfaceStyle;
@property (nonatomic, readonly) double contentScaleFactor;

@end
