/*
 Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

#import <UIKit/UIAlertController.h>

@class SKStarRatingControl, UIAlertAction;

@interface SKStarRatingAlertController : UIAlertController

{
    SKStarRatingControl *_ratingControl;
    UIAlertAction *_submitAction;
    CDUnknownBlockType _completion;
}

@property (nonatomic) float rating;
@property (copy, nonatomic) CDUnknownBlockType completion;

+ (id)starRatingAlertController;

- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)_ratingControlChanged:(id)arg1;
- (void)setupActionsWithBundle:(id)arg1;
- (void)_updateButtonState;

@end
