/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBFluidSwitcherButton.h>

@class NSString;

@interface SBFluidSwitcherTitledButton : SBFluidSwitcherButton

{
    NSString *_title;
}

@property (retain, nonatomic) NSString *title;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end
