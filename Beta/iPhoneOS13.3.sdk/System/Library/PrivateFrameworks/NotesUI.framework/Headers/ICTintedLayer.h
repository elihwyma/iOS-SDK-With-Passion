/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <QuartzCore/CALayer.h>

@class UIColor;

@interface ICTintedLayer : CALayer

{
    struct UIColor *_tintColor;
    id _originalContents;
}

@property (retain, nonatomic) id originalContents;
@property (retain, nonatomic) UIColor *tintColor;

- (void)setContents:(id)arg1;
- (void)updateContents;

@end
