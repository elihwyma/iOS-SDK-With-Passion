/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <UIKit/UIImageView.h>

@class GKHairlineView, GKLabel, NSString;

@interface GKBaseComposeHeaderField : UIImageView

{
    GKLabel *_nameLabel;
    GKHairlineView *_separatorView;
    unsigned long long _maxLineCount;
    SEL _actionWhenTouched;
}

@property (retain, nonatomic) GKLabel *nameLabel;
@property (retain, nonatomic) GKHairlineView *separatorView;
@property (nonatomic) unsigned long long maxLineCount;
@property (nonatomic, readonly) struct CGRect valueFrame;
@property (retain, nonatomic) NSString *nameText;
@property (retain, nonatomic) NSString *valueText;
@property (nonatomic) SEL actionWhenTouched;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (id)viewForBaselineLayout;
- (void)addConstraintsForValueView:(id)arg1;

@end
