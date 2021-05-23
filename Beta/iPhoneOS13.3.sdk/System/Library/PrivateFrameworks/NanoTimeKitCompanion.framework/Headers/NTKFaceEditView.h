/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <UIKit/UIView.h>

@class NSString, UIViewController;

@protocol NTKFaceEditViewDelegate, NTKFaceViewCustomEditing;

@interface NTKFaceEditView : UIView

{
    UIViewController<NTKFaceViewCustomEditing> *_editingContentViewController;
    id <NTKFaceEditViewDelegate> _delegate;
    long long _editMode;
}

@property (nonatomic, readonly) UIViewController<NTKFaceViewCustomEditing> *editingContentViewController;
@property (weak, nonatomic) id <NTKFaceEditViewDelegate> delegate;
@property (nonatomic) long long editMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)activate;
- (_Bool)_wheelChangedWithEvent:(id)arg1;
- (void)willActivate;
- (_Bool)isTransitioningBetweenEditPages;
- (id)initWithEditModes:(id)arg1 forDevice:(id)arg2;
- (void)setEditingContentViewController:(id)arg1 forEditMode:(long long)arg2;
- (void)addKeyline:(id)arg1 forKey:(id)arg2 tappable:(_Bool)arg3 editMode:(long long)arg4;
- (void)setLabelText:(id)arg1 forKey:(id)arg2 editMode:(long long)arg3;
- (void)setLabelAlignment:(unsigned long long)arg1 forKey:(id)arg2 editMode:(long long)arg3;
- (void)setLabelActiveAreaInsets:(struct UIEdgeInsets)arg1 forKey:(id)arg2 editMode:(long long)arg3;
- (void)setSelectedKeylineFrame:(struct CGRect)arg1 forKey:(id)arg2 editMode:(long long)arg3;
- (void)setDeselectedKeylineFrame:(struct CGRect)arg1 forKey:(id)arg2 editMode:(long long)arg3;
- (void)selectKeylineForKey:(id)arg1 editMode:(long long)arg2;
- (void)setForEditMode:(long long)arg1 gestureDidScrollHandler:(CDUnknownBlockType)arg2;
- (void)setForEditMode:(long long)arg1 gestureDidStopHandler:(CDUnknownBlockType)arg2;
- (void)setInfoText:(id)arg1 forEditMode:(long long)arg2;
- (void)setForEditMode:(long long)arg1 numberOfLisaValues:(unsigned long long)arg2 currentValue:(unsigned long long)arg3 valueHeight:(double)arg4 animated:(_Bool)arg5 detentType:(unsigned long long)arg6;
- (void)removeAllKeylinesForEditMode:(long long)arg1;
- (_Bool)_handlePhysicalButton:(unsigned long long)arg1 event:(unsigned long long)arg2;
- (void)setBackgroundFillAlpha:(double)arg1;
- (struct CGPoint)pageOffsetFromCenter:(long long)arg1;
- (void)willDeactivate;
- (void)deactivateWithCompletion:(CDUnknownBlockType)arg1;
- (void)setForEditMode:(long long)arg1 numberOfLisaValues:(unsigned long long)arg2 currentValue:(unsigned long long)arg3 valueHeight:(double)arg4;
- (void)setForEditMode:(long long)arg1 gestureDiscreteScrollHandler:(CDUnknownBlockType)arg2;

@end
