/*
 Image: /System/Library/PrivateFrameworks/Weather.framework/Weather
 */

#import <NSObject.h>

@class NSTimer;

@interface ProgressController : NSObject

{
    _Bool _progressShowing;
    int _loadingCount;
    NSTimer *_hideSpinnerTimer;
}

+ (id)sharedProgressController;

- (void)suspend;
- (void)_showSpinner;
- (void)_setHideSpinnerTimer:(id)arg1;
- (void)_hideSpinner;
- (void)userScrolled;
- (void)setLoadingData:(_Bool)arg1;

@end
