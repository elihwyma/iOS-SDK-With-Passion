/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <UIKit/UITextField.h>

@class GKTextStyle, NSString;

@interface GKTextField : UITextField

{
    GKTextStyle *_baseStyle;
    GKTextStyle *_appliedStyle;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) GKTextStyle *baseStyle;
@property (retain, nonatomic) GKTextStyle *appliedStyle;

+ (void)initialize;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)applyTextStyle:(id)arg1;
- (void)replayAndApplyStyleWithSystemContentChange:(_Bool)arg1;

@end
