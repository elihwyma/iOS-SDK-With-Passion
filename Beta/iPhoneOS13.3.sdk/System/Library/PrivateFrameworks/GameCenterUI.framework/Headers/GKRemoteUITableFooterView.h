/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <UIKit/UIView.h>

@class GKButton, NSArray, NSDictionary, NSString;

@protocol GKRemoteUIAuxiliaryViewDelegate;

@interface GKRemoteUITableFooterView : UIView

{
    _Bool _pinToBottom;
    int _layoutStyle;
    id <GKRemoteUIAuxiliaryViewDelegate> _delegate;
    GKButton *_button;
    NSDictionary *_attributes;
    NSArray *_replaceableConstraints;
    double _buttonBaselineOffset;
}

@property (retain, nonatomic) GKButton *button;
@property (retain, nonatomic) NSDictionary *attributes;
@property (nonatomic) _Bool pinToBottom;
@property (retain, nonatomic) NSArray *replaceableConstraints;
@property (nonatomic) double buttonBaselineOffset;
@property (nonatomic) int layoutStyle;
@property (nonatomic) id <GKRemoteUIAuxiliaryViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)didMoveToSuperview;
- (id)initWithAttributes:(id)arg1;
- (void)buttonTapped:(id)arg1;
- (void)objectModelDidChange:(id)arg1;
- (void)tableViewDidUpdateContentInset:(id)arg1;
- (double)footerHeightForWidth:(double)arg1 inTableView:(id)arg2;
- (void)createButtonWithAttributes:(id)arg1;
- (void)adjustSizeToFillSuperview:(id)arg1;

@end
