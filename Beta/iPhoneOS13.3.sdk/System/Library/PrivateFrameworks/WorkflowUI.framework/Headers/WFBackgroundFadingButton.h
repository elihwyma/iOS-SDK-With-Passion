/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UIButton.h>

@class NSMutableDictionary;

@interface WFBackgroundFadingButton : UIButton

{
    _Bool _derivesTitleColorFromTintColor;
    _Bool _derivesBackgroundColorFromTintColor;
    NSMutableDictionary *_backgroundColorsByState;
}

@property (retain, nonatomic) NSMutableDictionary *backgroundColorsByState;
@property (nonatomic) _Bool derivesTitleColorFromTintColor;
@property (nonatomic) _Bool derivesBackgroundColorFromTintColor;

- (void)setEnabled:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)tintColorDidChange;
- (void)setSelected:(_Bool)arg1;
- (void)setBackgroundColor:(id)arg1 forState:(unsigned long long)arg2;
- (void)updateBackgroundColorAnimated:(_Bool)arg1;

@end
