/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString, SXLayoutOptions;

@interface SXConditionValidationContext : NSObject

{
    SXLayoutOptions *_layoutOptions;
}

@property (nonatomic, readonly) SXLayoutOptions *layoutOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
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

- (id)initWithLayoutOptions:(id)arg1;

@end
