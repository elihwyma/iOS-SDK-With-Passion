/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <ContactsUI/CNLabeledCell.h>

@class CNActionView, CNUIUserActionListDataSource, NSString, UILabel;

@protocol CNPropertyCellDelegate;

__attribute__((visibility("hidden")))
@interface CNFaceTimeCell : CNLabeledCell

{
    _Bool _isFaceTimeAudioAvailable;
    CNUIUserActionListDataSource *_actionsDataSource;
    id <CNPropertyCellDelegate> _delegate;
    UILabel *_faceTimeLabel;
    CNActionView *_actionView1;
    CNActionView *_actionView2;
}

@property (nonatomic, readonly) UILabel *faceTimeLabel;
@property (nonatomic) _Bool isFaceTimeAudioAvailable;
@property (nonatomic, readonly) CNActionView *actionView1;
@property (nonatomic, readonly) CNActionView *actionView2;
@property (retain, nonatomic) CNUIUserActionListDataSource *actionsDataSource;
@property (weak, nonatomic) id <CNPropertyCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)tintColorDidChange;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)labelView;
- (id)variableConstraints;
- (double)minCellHeight;
- (id)rightMostView;
- (id)constantConstraints;
- (void)performDefaultAction;
- (void)didPressActionView:(id)arg1 longPress:(_Bool)arg2;
- (void)updateHorizontalTouchAreas;

@end
