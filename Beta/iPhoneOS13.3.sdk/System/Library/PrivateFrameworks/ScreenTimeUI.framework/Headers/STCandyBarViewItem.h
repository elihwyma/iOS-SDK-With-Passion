/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <Foundation/NSObject.h>

@class NSLayoutConstraint, UIImageView;

__attribute__((visibility("hidden")))
@interface STCandyBarViewItem : NSObject

{
    UIImageView *_sectionView;
    NSLayoutConstraint *_widthConstraint;
}

@property (retain, nonatomic) UIImageView *sectionView;
@property (retain, nonatomic) NSLayoutConstraint *widthConstraint;

- (id)init;

@end
