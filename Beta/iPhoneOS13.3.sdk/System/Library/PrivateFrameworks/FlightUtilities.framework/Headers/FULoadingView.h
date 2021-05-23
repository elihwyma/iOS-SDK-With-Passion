/*
 Image: /System/Library/PrivateFrameworks/FlightUtilities.framework/FlightUtilities
 */

#import <UIView.h>

@class FULabel;

__attribute__((visibility("hidden")))
@interface FULoadingView : UIView

{
    FULabel *_loadingLabel;
}

@property (retain) FULabel *loadingLabel;

- (id)init;
- (void)setStyleProvider:(id)arg1;

@end
