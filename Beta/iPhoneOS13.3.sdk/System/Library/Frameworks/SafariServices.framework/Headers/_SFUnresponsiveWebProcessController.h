/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSTimer, UIViewController, _SFBrowserContentViewController;

__attribute__((visibility("hidden")))
@interface _SFUnresponsiveWebProcessController : NSObject

{
    NSTimer *_webProcessWatchdogTimer;
    NSMutableArray *_tapToRadarRecords;
    _SFBrowserContentViewController *_contentViewController;
    _Bool _shouldIgnoreDidBecomeResponsive;
    UIViewController *_activeBrowserContentViewController;
}

@property (nonatomic) _Bool shouldIgnoreDidBecomeResponsive;
@property (nonatomic, readonly) _Bool supportsTapToRadar;
@property (weak, nonatomic) UIViewController *activeBrowserContentViewController;

+ (id)sharedController;

- (void)recordURLForTapToRadar:(id)arg1 hostAppIdentifier:(id)arg2;
- (void)_webProcessWatchdogTimerFired:(id)arg1;
- (void)_promptTapToRadar:(CDUnknownBlockType)arg1;
- (void)_tapToRadar;
- (void)unscheduleWatchdogTimer;
- (void)scheduleWatchdogTimerForContentViewController:(id)arg1;

@end
