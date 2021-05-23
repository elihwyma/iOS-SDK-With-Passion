/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString, UIColor, UIPickerTableView, UIPickerView;

__attribute__((visibility("hidden")))
@interface UIPickerColumnView : UIView <Swift>

{
    UIPickerTableView *_topTable;
    UIPickerTableView *_middleTable;
    UIPickerTableView *_bottomTable;
    UIView *_topContainerView;
    UIView *_middleContainerView;
    UIView *_bottomContainerView;
    double _middleBarHeight;
    double _rowHeight;
    UIPickerView *_pickerView;
    struct CGRect _tableFrame;
    struct CATransform3D _perspectiveTransform;
    _Bool _isNoLongerInUse;
    UIColor *__textColor;
    double _leftHitTestExtension;
    double _rightHitTestExtension;
}

@property (nonatomic) _Bool isNoLongerInUse;
@property (nonatomic) struct CGRect selectionBarRect;
@property (nonatomic, readonly) long long selectionBarRow;
@property (retain, nonatomic, getter=_textColor, setter=_setTextColor:) UIColor *_textColor;
@property (nonatomic) double rowHeight;
@property (nonatomic) struct CATransform3D perspectiveTransform;
@property (nonatomic) double leftHitTestExtension;
@property (nonatomic) double rightHitTestExtension;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (struct CGRect)accessibilityFrame;
- (id)accessibilityPath;
- (_Bool)canBecomeFocused;
- (void)reloadData;
- (struct CGRect)_defaultFocusRegionFrame;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfRowsInSection:(long long)arg1;
- (void)setAllowsMultipleSelection:(_Bool)arg1;
- (id)cellForRowAtIndexPath:(id)arg1;
- (id)_viewToAddFocusLayer;
- (_Bool)_soundsEnabled;
- (void)pickerTableView:(id)arg1 didChangeSelectionBarRowFrom:(long long)arg2 to:(long long)arg3;
- (id)_createContainerViewWithFrame:(struct CGRect)arg1;
- (id)_createTableViewWithFrame:(struct CGRect)arg1 containingFrame:(struct CGRect)arg2;
- (void)_centerTableInContainer:(id)arg1;
- (double)_horizontalBiasForEndTables;
- (struct CATransform3D)_transformForTableWithPerspectiveTranslationX:(double)arg1;
- (struct CATransform3D)_transformForTableWithTranslationX:(double)arg1;
- (_Bool)selectRow:(long long)arg1 animated:(_Bool)arg2 notify:(_Bool)arg3 updateChecked:(_Bool)arg4;
- (_Bool)isRowChecked:(long long)arg1;
- (_Bool)_scrollRowAtIndexPathToSelectionBar:(id)arg1 animated:(_Bool)arg2;
- (_Bool)_usesCheckSelection;
- (void)beginUpdates;
- (void)endUpdates;
- (void)_moveTableViewIfNecessary:(id)arg1 toContentOffset:(struct CGPoint)arg2;
- (struct _NSRange)_visibleGlobalRows;
- (id)_allVisibleCells;
- (void)_sendCheckedRow:(long long)arg1 inTableView:(id)arg2 checked:(_Bool)arg3;
- (void)_pickerTableViewDidChangeContentOffset:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 tableFrame:(struct CGRect)arg2 middleBarHeight:(double)arg3 rowHeight:(double)arg4 pickerView:(id)arg5 transform:(struct CATransform3D)arg6;
- (_Bool)_containsTable:(id)arg1;
- (id)_preferredTable;
- (struct CGRect)_tableFrame;
- (_Bool)_pointLiesWithinEffectiveTableBounds:(struct CGPoint)arg1;
- (_Bool)selectRow:(long long)arg1 animated:(_Bool)arg2 notify:(_Bool)arg3;
- (void)markAsNoLongerInUse;
- (id)_visibleCellClosestToPoint:(struct CGPoint)arg1 inView:(id)arg2;

@end
