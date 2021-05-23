/*
 Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import <UIView.h>

@interface TPView : UIView

{
    _Bool _accessiblityConstraintsEnabled;
    _Bool _constraintsLoaded;
}

@property (nonatomic, getter=isAccessiblityConstraintsEnabled) _Bool accessiblityConstraintsEnabled;
@property (nonatomic, getter=isConstraintsLoaded) _Bool constraintsLoaded;

+ (_Bool)requiresConstraintBasedLayout;

- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateConstraints;
- (void)updateFonts;
- (void)updateConstraintsConstants;
- (void)loadConstraints;
- (void)unloadConstraints;

@end
