/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXObservable.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSArray, NSDate, NSSet, NSString, NSURL, PXPhotosGlobalFooterViewModel, PXRecipient, PXSectionedSelectionManager;

@protocol PXDisplayAsset, PXUIImageProvider;

@interface PXCMMViewModel : PXObservable <Swift>

{
    _Bool _selecting;
    _Bool _selectionEnabled;
    _Bool _shouldShowPlaceholder;
    _Bool _containsUnverifiedPersons;
    _Bool _loadingPeopleSuggestions;
    NSString *_originalTitle;
    NSString *_title;
    NSString *_subtitle;
    PXSectionedSelectionManager *_selectionManager;
    NSArray *_recipients;
    NSURL *_shareURL;
    NSString *_shareUUID;
    PXRecipient *_originatorRecipient;
    unsigned long long _numberOfReceivedAssets;
    id <PXDisplayAsset> _posterAsset;
    id <PXUIImageProvider> _posterMediaProvider;
    NSDate *_startDate;
    NSDate *_endDate;
    long long _photosCount;
    long long _videosCount;
    long long _totalCount;
    long long _selectedPhotosCount;
    long long _selectedVideosCount;
    long long _selectedCount;
    NSSet *_disabledActionTypes;
    PXPhotosGlobalFooterViewModel *_footerViewModel;
}

@property (nonatomic, readonly) long long aggregateMediaTypeForSelection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) long long aggregateMediaType;
@property (copy, nonatomic, readonly) NSString *originalTitle;
@property (copy, nonatomic, readonly) NSString *title;
@property (copy, nonatomic, readonly) NSString *subtitle;
@property (nonatomic, readonly) PXSectionedSelectionManager *selectionManager;
@property (copy, nonatomic, readonly) NSArray *recipients;
@property (copy, nonatomic, readonly) NSURL *shareURL;
@property (copy, nonatomic, readonly) NSString *shareUUID;
@property (nonatomic, readonly, getter=isSelecting) _Bool selecting;
@property (nonatomic, readonly) _Bool selectionEnabled;
@property (copy, nonatomic, readonly) PXRecipient *originatorRecipient;
@property (nonatomic, readonly) unsigned long long numberOfReceivedAssets;
@property (nonatomic, readonly) id <PXDisplayAsset> posterAsset;
@property (nonatomic, readonly) id <PXUIImageProvider> posterMediaProvider;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) long long photosCount;
@property (nonatomic, readonly) long long videosCount;
@property (nonatomic, readonly) long long totalCount;
@property (nonatomic, readonly) long long selectedPhotosCount;
@property (nonatomic, readonly) long long selectedVideosCount;
@property (nonatomic, readonly) long long selectedCount;
@property (nonatomic, readonly) NSSet *disabledActionTypes;
@property (nonatomic, readonly) _Bool shouldShowPlaceholder;
@property (nonatomic, readonly) _Bool containsUnverifiedPersons;
@property (nonatomic, readonly) PXPhotosGlobalFooterViewModel *footerViewModel;
@property (nonatomic, readonly, getter=isLoadingPeopleSuggestions) _Bool loadingPeopleSuggestions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)setTitle:(id)arg1;
- (void)setStartDate:(id)arg1;
- (void)setEndDate:(id)arg1;
- (void)setRecipients:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setSelecting:(_Bool)arg1;
- (void)setShareURL:(id)arg1;
- (void)setPhotosCount:(long long)arg1;
- (void)setVideosCount:(long long)arg1;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (void)setOriginalTitle:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (id)mutableChangeObject;
- (void)setLoadingPeopleSuggestions:(_Bool)arg1;
- (void)setContainsUnverifiedPersons:(_Bool)arg1;
- (void)setPosterAsset:(id)arg1 posterMediaProvider:(id)arg2;
- (void)setSelectionManager:(id)arg1;
- (void)setShareUUID:(id)arg1;
- (void)setTotalCount:(long long)arg1;
- (void)setSelectedPhotosCount:(long long)arg1;
- (void)setSelectedVideosCount:(long long)arg1;
- (void)setSelectedCount:(long long)arg1;
- (void)setSelectionEnabled:(_Bool)arg1;
- (void)setDisabledActionTypes:(id)arg1;
- (void)setShouldShowPlaceholder:(_Bool)arg1;
- (void)setOriginatorRecipient:(id)arg1;
- (void)setNumberOfReceivedAssets:(unsigned long long)arg1;

@end
