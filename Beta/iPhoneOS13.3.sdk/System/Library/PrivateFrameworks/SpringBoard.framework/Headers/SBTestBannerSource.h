/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@protocol SBUIBannerTarget;

@interface SBTestBannerSource : NSObject

{
    id <SBUIBannerTarget> _target;
    NSMutableArray *_enqueuedItems;
    long long _count;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (id)peekNextBannerItemForTarget:(id)arg1;
- (id)dequeueNextBannerItemForTarget:(id)arg1;
- (id)newBannerViewForContext:(id)arg1;
- (void)bannerViewWillAppear:(id)arg1;
- (void)bannerViewDidAppear:(id)arg1;
- (void)bannerViewWillDismiss:(id)arg1 forReason:(int)arg2;
- (void)bannerViewDidDismiss:(id)arg1 forReason:(int)arg2;
- (void)enqueueBanner;
- (void)dismissBanner;

@end
