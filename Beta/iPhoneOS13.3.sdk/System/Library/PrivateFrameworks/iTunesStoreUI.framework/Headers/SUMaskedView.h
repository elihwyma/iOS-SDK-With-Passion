/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <UIKit/UIView.h>

@class SUMaskProvider;

@interface SUMaskedView : UIView

{
    SUMaskProvider *_maskProvider;
}

@property (retain, nonatomic) SUMaskProvider *maskProvider;

- (void)dealloc;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGPath *)copyMaskPath;
- (void)_reloadMask;

@end
