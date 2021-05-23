/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UIView.h>

__attribute__((visibility("hidden")))
@interface PUCloudSharedBackdropView : UIView

{
    UIView *_backdropView;
    _Bool _isMask;
    _Bool _hasRoundedCorners;
}

@property (nonatomic) _Bool hasRoundedCorners;

- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 asMask:(_Bool)arg2;

@end
