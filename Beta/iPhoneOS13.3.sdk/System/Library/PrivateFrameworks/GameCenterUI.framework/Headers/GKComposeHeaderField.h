/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <GameCenterUI/GKBaseComposeHeaderField.h>

@class GKLabel;

@interface GKComposeHeaderField : GKBaseComposeHeaderField

{
    GKLabel *_valueLabel;
}

@property (retain, nonatomic) GKLabel *valueLabel;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setValueText:(id)arg1;
- (id)valueText;
- (void)setMaxLineCount:(unsigned long long)arg1;
- (struct CGRect)valueFrame;

@end
