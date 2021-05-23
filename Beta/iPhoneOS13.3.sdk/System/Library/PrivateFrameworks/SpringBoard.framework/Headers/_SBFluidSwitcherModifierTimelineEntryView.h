/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UIView.h>

@class SBSwitcherModifierTimelineEntry, UILabel, UITapGestureRecognizer;

@protocol _SBFluidSwitcherModifierTimelineEntryViewDelegate;

@interface _SBFluidSwitcherModifierTimelineEntryView : UIView

{
    UILabel *_nameLabel;
    UILabel *_postStackLabel;
    UILabel *_actionsLabel;
    UITapGestureRecognizer *_tapRecognizer;
    SBSwitcherModifierTimelineEntry *_entry;
    id <_SBFluidSwitcherModifierTimelineEntryViewDelegate> _delegate;
}

@property (retain, nonatomic) SBSwitcherModifierTimelineEntry *entry;
@property (weak, nonatomic) id <_SBFluidSwitcherModifierTimelineEntryViewDelegate> delegate;

- (void)layoutSubviews;
- (void)_tap:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 entry:(id)arg2;
- (id)_stringForStack:(id)arg1;
- (id)_appendRecursiveDescriptionToString:(id)arg1 level:(unsigned long long)arg2 snapshot:(id)arg3;
- (id)_randomColor;

@end
