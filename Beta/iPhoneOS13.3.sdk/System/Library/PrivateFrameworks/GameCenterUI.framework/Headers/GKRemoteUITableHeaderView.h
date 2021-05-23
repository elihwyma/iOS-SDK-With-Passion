/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <UIKit/UIView.h>

@class GKButton, GKLabel, NSArray, NSDictionary, NSString;

@protocol GKRemoteUIAuxiliaryViewDelegate;

@interface GKRemoteUITableHeaderView : UIView

{
    int _layoutStyle;
    id <GKRemoteUIAuxiliaryViewDelegate> _delegate;
    double _height;
    GKLabel *_label;
    GKLabel *_subLabel;
    GKButton *_button;
    NSDictionary *_attributes;
    NSArray *_replaceableConstraints;
}

@property (nonatomic) double height;
@property (retain, nonatomic) GKLabel *label;
@property (retain, nonatomic) GKLabel *subLabel;
@property (retain, nonatomic) GKButton *button;
@property (retain, nonatomic) NSDictionary *attributes;
@property (retain, nonatomic) NSArray *replaceableConstraints;
@property (nonatomic) int layoutStyle;
@property (nonatomic) id <GKRemoteUIAuxiliaryViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithAttributes:(id)arg1;
- (double)rightMargin;
- (void)buttonTapped:(id)arg1;
- (void)objectModelDidChange:(id)arg1;
- (double)bottomMargin;
- (double)leftMargin;
- (void)createButtonWithAttributes:(id)arg1;
- (void)createLabelWithAttributes:(id)arg1;
- (void)createSubLabelWithAttributes:(id)arg1;
- (void)applyConstraints;
- (double)labelBaselineOffset;
- (double)labelBaselineToSubLabelTopOffset;
- (double)labelBaselineToButtonBaselineOffset;
- (double)labelTopOffset;

@end
