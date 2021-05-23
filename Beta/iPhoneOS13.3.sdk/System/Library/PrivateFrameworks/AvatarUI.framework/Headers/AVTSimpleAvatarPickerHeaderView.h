/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <UIKit/UICollectionReusableView.h>

@class AVTCircularButton, NSString, UIImageSymbolConfiguration;

@interface AVTSimpleAvatarPickerHeaderView : UICollectionReusableView

{
    AVTCircularButton *_button;
    CDUnknownBlockType _buttonPressedBlock;
    NSString *_currentSymbolName;
    UIImageSymbolConfiguration *_plusSymbolConfiguration;
    UIImageSymbolConfiguration *_ellipsisSymbolConfiguration;
}

@property (retain, nonatomic) NSString *currentSymbolName;
@property (retain, nonatomic) UIImageSymbolConfiguration *plusSymbolConfiguration;
@property (retain, nonatomic) UIImageSymbolConfiguration *ellipsisSymbolConfiguration;
@property (nonatomic, readonly) AVTCircularButton *button;
@property (copy, nonatomic) CDUnknownBlockType buttonPressedBlock;

+ (id)reuseIdentifier;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)buttonPressed:(id)arg1;
- (void)setupLayout;
- (void)updateForEditMode:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updateWithSymbolNamed:(id)arg1 configuration:(id)arg2 animated:(_Bool)arg3;

@end
