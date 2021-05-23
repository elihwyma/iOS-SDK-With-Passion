/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIImageView.h>

@class UIView;

__attribute__((visibility("hidden")))
@interface _UIBarBackgroundImageView : UIImageView

{
    UIView *_topStripView;
    UIImageView *_customImageContainer;
    _Bool _translucent;
}

@property (nonatomic, getter=isTranslucent) _Bool translucent;

- (id)image;
- (void)setImage:(id)arg1;
- (id)topStripView;
- (void)updateTopStripViewCreateIfNecessary;
- (void)removeTopStripView;

@end
