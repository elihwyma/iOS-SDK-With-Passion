/*
 Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

#import <BackBoardServices/Swift-Protocol.h>

@class BKSDisplayProgressIndicatorProperties, CADisplay, NSString;

@protocol BKSDisplayRenderOverlayDescribing <Swift>

@property (copy, nonatomic, readonly) NSString *name;
@property (retain, nonatomic, readonly) CADisplay *display;
@property (nonatomic, readonly) long long interfaceOrientation;
@property (nonatomic, readonly) _Bool lockBacklight;
@property (nonatomic, readonly) BKSDisplayProgressIndicatorProperties *progressIndicatorProperties;
@property (nonatomic, readonly, getter=isInterstitial) _Bool interstitial;

@end
