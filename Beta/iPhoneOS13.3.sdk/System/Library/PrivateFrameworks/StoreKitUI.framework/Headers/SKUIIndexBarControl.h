/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIControl.h>

@class NSArray, NSDictionary, NSIndexPath, NSMapTable, SKUIIndexBarEntry;

@protocol SKUIIndexBarControlDataSource, SKUIIndexBarControlDelegate;

@interface SKUIIndexBarControl : UIControl

{
    SKUIIndexBarEntry *_combinedEntry;
    _Bool _didSendPastBottom;
    _Bool _didSendPastTop;
    NSArray *_displayEntries;
    _Bool _hasValidCombinedEntry;
    _Bool _hasValidDisplayEntries;
    _Bool _hasValidNumberOfSections;
    _Bool _hasValidTotalEntryCount;
    _Bool _hasValidTotalSize;
    NSMapTable *_indexPathToEntryMapTable;
    NSIndexPath *_lastSelectedIndexPath;
    double _lineSpacing;
    long long _numberOfSections;
    NSMapTable *_sectionIndexToNumberOfEntriesMapTable;
    long long _totalEntryCount;
    struct CGSize _totalSize;
    CDStruct_2ba00048 _dataSourceDelegateFlags;
    id <SKUIIndexBarControlDataSource> _dataSource;
    NSDictionary *_defaultTextAttributes;
    id <SKUIIndexBarControlDelegate> _delegate;
    struct UIEdgeInsets _contentEdgeInsets;
    struct UIEdgeInsets _hitTestEdgeInsets;
}

@property (nonatomic) struct UIEdgeInsets contentEdgeInsets;
@property (nonatomic) struct UIEdgeInsets hitTestEdgeInsets;
@property (weak, nonatomic) id <SKUIIndexBarControlDataSource> dataSource;
@property (copy, nonatomic) NSDictionary *defaultTextAttributes;
@property (weak, nonatomic) id <SKUIIndexBarControlDelegate> delegate;
@property (nonatomic, readonly) long long numberOfSections;

- (id)initWithCoder:(id)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setTransform:(struct CGAffineTransform)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)tintColorDidChange;
- (void)reloadData;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGRect)_visibleBounds;
- (void)reloadSections:(id)arg1;
- (long long)_numberOfSections;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)_allEntries;
- (id)_displayEntries;
- (struct CGSize)_totalSize;
- (void)reloadCombinedEntry;
- (void)reloadEntryAtIndexPath:(id)arg1;
- (void)_invalidateForChangedLayoutProperties;
- (void)_sendSelectionForTouch:(id)arg1 withEvent:(id)arg2;
- (void)_invalidateDisplayEntries;
- (long long)_numberOfEntriesInSection:(long long)arg1;
- (id)_entryAtIndexPath:(id)arg1;
- (void)_enumerateEntryIndexPathsUsingBlock:(CDUnknownBlockType)arg1;
- (void)_configureNewEntry:(id)arg1;
- (struct CGSize)_sizeForEntries:(id)arg1;
- (id)_combinedEntry;
- (id)_displayEntriesThatFitInViewForGroupedEntries;
- (id)_allRequiredEntries;
- (_Bool)_reloadLineSpacing;
- (long long)_totalEntryCount;
- (struct CGSize)_sizeForEntryAtIndexPath:(id)arg1;
- (long long)numberOfEntriesInSection:(long long)arg1;

@end
