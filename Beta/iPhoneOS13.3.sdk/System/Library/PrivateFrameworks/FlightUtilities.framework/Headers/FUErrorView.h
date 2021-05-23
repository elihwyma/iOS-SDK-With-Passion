/*
 Image: /System/Library/PrivateFrameworks/FlightUtilities.framework/FlightUtilities
 */

#import <UIView.h>

@class FULabel;

__attribute__((visibility("hidden")))
@interface FUErrorView : UIView

{
    FULabel *_errorLabel;
}

@property (retain) FULabel *errorLabel;

- (id)init;
- (void)setStyleProvider:(id)arg1;

@end
