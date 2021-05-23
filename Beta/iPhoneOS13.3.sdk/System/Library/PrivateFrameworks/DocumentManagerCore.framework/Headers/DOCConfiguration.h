/*
 Image: /System/Library/PrivateFrameworks/DocumentManagerCore.framework/DocumentManagerCore
 */

#import <Foundation/NSObject.h>

@class DOCConcreteLocation, NSArray, NSString;

@interface DOCConfiguration : NSObject

{
    _Bool _shouldIgnoreInteractionMode;
    _Bool _inProcess;
    _Bool _forPickingDocuments;
    _Bool _forPickingFolders;
    _Bool _supportsRemovableFileProviders;
    _Bool _forPickingDownloadsFolder;
    _Bool _isContentManaged;
    _Bool _neverCreateBookmarkForOpenInPlace;
    _Bool _pickingItemsShouldBumpLastOpenDate;
    _Bool _suppressBlackCallout;
    _Bool _preferLastUsedDate;
    _Bool _shouldOpenInApp;
    _Bool _restoreLastVisitedLocation;
    _Bool _saveLastVisitedLocation;
    _Bool _collectionSupportsDragAndDrop;
    _Bool _skipDownload;
    _Bool _presentingMakesCollectionFirstResponder;
    _Bool _showCollectionControls;
    _Bool _supportsColumnView;
    _Bool _shouldAdjustContentInset;
    _Bool _useSharedQuickLook;
    _Bool _useExpandedSourceList;
    DOCConcreteLocation *_defaultLocation;
    unsigned long long _interactionMode;
    NSArray *_excludedDocumentTypes;
    NSArray *_recentDocumentsTypes;
    NSArray *_urls;
    NSString *_hostIdentifier;
    NSString *_hostBundleTitle;
    NSArray *_hiddenSourcesIdentifiers;
    unsigned long long _maximumNumberOfItemsToFetch;
    unsigned long long _maximumNumberOfRows;
    unsigned long long _browserViewContext;
    NSString *_roleIdentifier;
    NSString *_stateIdentifier;
    NSString *_sceneIdentifier;
    NSArray *_forbiddenActionIdentifiers;
    double _thumbnailFetchingTimeOut;
    NSArray *_documentTypes;
}

@property (copy, nonatomic) NSArray *documentTypes;
@property (retain) NSArray *urls;
@property (retain) DOCConcreteLocation *defaultLocation;
@property unsigned long long interactionMode;
@property _Bool shouldIgnoreInteractionMode;
@property _Bool inProcess;
@property (copy, nonatomic) NSArray *excludedDocumentTypes;
@property (copy, nonatomic) NSArray *recentDocumentsTypes;
@property (copy, nonatomic) NSString *hostIdentifier;
@property (copy, nonatomic) NSString *hostBundleTitle;
@property _Bool forPickingDocuments;
@property _Bool forPickingFolders;
@property _Bool supportsRemovableFileProviders;
@property _Bool forPickingDownloadsFolder;
@property (nonatomic) _Bool isContentManaged;
@property _Bool neverCreateBookmarkForOpenInPlace;
@property _Bool pickingItemsShouldBumpLastOpenDate;
@property _Bool suppressBlackCallout;
@property _Bool preferLastUsedDate;
@property (readonly) _Bool isFilesApp;
@property (readonly) _Bool isPopover;
@property (readonly) _Bool isWidget;
@property (readonly) _Bool isPopoverOrWidget;
@property _Bool shouldOpenInApp;
@property (copy, nonatomic) NSArray *hiddenSourcesIdentifiers;
@property _Bool restoreLastVisitedLocation;
@property _Bool saveLastVisitedLocation;
@property _Bool collectionSupportsDragAndDrop;
@property unsigned long long maximumNumberOfItemsToFetch;
@property unsigned long long maximumNumberOfRows;
@property _Bool skipDownload;
@property _Bool presentingMakesCollectionFirstResponder;
@property _Bool showCollectionControls;
@property _Bool supportsColumnView;
@property _Bool shouldAdjustContentInset;
@property _Bool useSharedQuickLook;
@property _Bool useExpandedSourceList;
@property unsigned long long browserViewContext;
@property (copy, nonatomic) NSString *roleIdentifier;
@property (copy, nonatomic) NSString *stateIdentifier;
@property (copy, nonatomic) NSString *sceneIdentifier;
@property (copy) NSArray *forbiddenActionIdentifiers;
@property double thumbnailFetchingTimeOut;

+ (_Bool)supportsSecureCoding;
+ (id)configurationForFolderPicking;
+ (id)configurationForImportingDocumentsWithContentTypes:(id)arg1 mode:(unsigned long long)arg2;
+ (id)configurationForExportingDocumentsToURLs:(id)arg1 mode:(unsigned long long)arg2;
+ (id)configurationForOpeningDocumentsOfApplicationWithBundleIdentifier:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToConfiguration:(id)arg1;
- (unsigned long long)interactionModeForPreparing;

@end
