/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSString, PXPeopleStripCollectionViewController, PXPhotosDetailsContext, PXSectionedSelectionManager, PXSharingSuggestionDataSource, PXTilingController, PXWidgetSpec;

@protocol PXAnonymousView, PXWidgetDelegate, PXWidgetUnlockDelegate;

@interface PXSharingSuggestionWidget : NSObject <Swift>

{
    _Bool _userInteractionEnabled;
    id <PXWidgetDelegate> _widgetDelegate;
    PXPhotosDetailsContext *_context;
    PXWidgetSpec *_spec;
    long long _contentViewAnchoringType;
    id <PXWidgetUnlockDelegate> _widgetUnlockDelegate;
    PXPeopleStripCollectionViewController *_collectionViewController;
    PXSharingSuggestionDataSource *_dataSource;
    unsigned long long _options;
    unsigned long long _sharingStream;
    double _cellMinInteritemSpacing;
    double _cellMinLineSpacing;
    double _targetPrefetchWidth;
    struct CGSize _contentSize;
    struct CGSize _cellSize;
}

@property (retain, nonatomic) PXPeopleStripCollectionViewController *collectionViewController;
@property (retain, nonatomic) PXSharingSuggestionDataSource *dataSource;
@property (nonatomic) unsigned long long options;
@property (nonatomic) unsigned long long sharingStream;
@property (nonatomic) struct CGSize contentSize;
@property (nonatomic) struct CGSize cellSize;
@property (nonatomic) double cellMinInteritemSpacing;
@property (nonatomic) double cellMinLineSpacing;
@property (nonatomic) double targetPrefetchWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <PXWidgetDelegate> widgetDelegate;
@property (weak, nonatomic) id <PXWidgetUnlockDelegate> widgetUnlockDelegate;
@property (retain, nonatomic) PXPhotosDetailsContext *context;
@property (retain, nonatomic) PXWidgetSpec *spec;
@property (nonatomic, readonly) _Bool hasContentForCurrentInput;
@property (nonatomic, readonly) _Bool hasLoadedContentData;
@property (nonatomic, readonly) NSObject<PXAnonymousView> *contentView;
@property (nonatomic, readonly) long long contentViewAnchoringType;
@property (nonatomic, readonly) PXTilingController *contentTilingController;
@property (nonatomic, readonly) long long contentLayoutStyle;
@property (nonatomic, readonly) NSString *localizedTitle;
@property (nonatomic, readonly) NSString *localizedSubtitle;
@property (nonatomic, readonly) NSString *localizedCaption;
@property (nonatomic, readonly) NSString *localizedDisclosureTitle;
@property (nonatomic, readonly) _Bool allowUserInteractionWithSubtitle;
@property (nonatomic, getter=isUserInteractionEnabled) _Bool userInteractionEnabled;
@property (nonatomic, readonly) _Bool supportsSelection;
@property (nonatomic, getter=isSelecting) _Bool selecting;
@property (nonatomic, readonly) _Bool supportsFaceMode;
@property (nonatomic, getter=isFaceModeEnabled) _Bool faceModeEnabled;
@property (nonatomic, readonly) PXSectionedSelectionManager *selectionManager;

- (id)traitCollection;
- (double)minimumInteritemSpacing;
- (double)minimumLineSpacing;
- (struct UIEdgeInsets)sectionInset;
- (double)preferredContentHeightForWidth:(double)arg1;
- (void)loadContentData;
- (void)unloadContentData;
- (void)peopleDataSourceMembersChanged:(id)arg1;
- (void)peopleDataSource:(id)arg1 didApplyIncrementalChanges:(id)arg2;
- (struct CGSize)sizeForItem;
- (void)memberTappedAtIndexPath:(id)arg1 forPeopleStripController:(id)arg2;
- (id)initWithSharingStream:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (void)contentSizeCategoryChanged:(id)arg1;
- (void)peopleDataSource:(id)arg1 didAddMembersAtIndexPaths:(id)arg2;
- (void)peopleDataSource:(id)arg1 didRemoveMembersAtIndexPaths:(id)arg2;
- (void)peopleDataSource:(id)arg1 didUpdateMembersAtIndexPaths:(id)arg2;
- (void)_prepareDataSource;
- (struct UIEdgeInsets)_realContentInset;
- (void)_loadContainerView;
- (_Bool)_calculateLayoutInfosForWidth:(double)arg1 cellSize:(struct CGSize *)arg2 interitemSpacing:(double *)arg3;
- (struct CGSize)_sizeForItemWithWidth:(double)arg1 withInterItemSpacing:(double)arg2;
- (unsigned long long)_numberOfVisibleFacesForWidth:(double)arg1;
- (void)_resetControllerLayoutInfosForWidth:(double)arg1;

@end
