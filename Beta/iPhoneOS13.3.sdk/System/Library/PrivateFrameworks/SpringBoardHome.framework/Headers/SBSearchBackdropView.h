/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <UIKit/UIView.h>

@class MTMaterialView, NSString;

@interface SBSearchBackdropView : UIView

{
    MTMaterialView *_materialView;
    _Bool _transitioningToBlur;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)setTransitionProgress:(double)arg1;
- (void)completeTransitionSuccessfully:(_Bool)arg1;
- (void)prepareForTransitionToBlurred:(_Bool)arg1;
- (void)completeIncrementalTransitionSuccessfully:(_Bool)arg1;

@end
