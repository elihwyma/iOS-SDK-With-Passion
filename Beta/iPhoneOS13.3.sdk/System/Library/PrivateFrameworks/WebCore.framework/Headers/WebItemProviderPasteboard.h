/*
 Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import <NSObject.h>

@class NSArray, NSString;

@interface WebItemProviderPasteboard : NSObject

{
    struct RetainPtr<NSArray> _itemProviders;
    struct RetainPtr<NSArray> _supportedTypeIdentifiers;
    struct RetainPtr<WebItemProviderRegistrationInfoList> _stagedRegistrationInfoList;
    struct Vector<WTF::RetainPtr<WebItemProviderLoadResult>, 0, WTF::CrashOnOverflow, 16> _loadResults;
    long long _numberOfItems;
    long long _changeCount;
    long long _pendingOperationCount;
}

@property (nonatomic) long long numberOfItems;
@property (nonatomic) long long changeCount;
@property (nonatomic) long long pendingOperationCount;
@property (copy, nonatomic) NSArray *itemProviders;
@property (nonatomic, readonly) NSArray *allDroppedFileURLs;
@property (nonatomic, readonly) _Bool hasPendingOperation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) long long numberOfFiles;

+ (id)sharedInstance;

- (id)init;
- (id).cxx_construct;
- (id)pasteboardTypes;
- (id)dataForPasteboardType:(id)arg1;
- (id)valuesForPasteboardType:(id)arg1 inItemSet:(id)arg2;
- (id)dataForPasteboardType:(id)arg1 inItemSet:(id)arg2;
- (id)takeRegistrationList;
- (void)decrementPendingOperationCount;
- (void)incrementPendingOperationCount;
- (void)doAfterLoadingProvidedContentIntoFileURLs:(CDUnknownBlockType)arg1 synchronousTimeout:(double)arg2;
- (void)doAfterLoadingProvidedContentIntoFileURLs:(CDUnknownBlockType)arg1;
- (void)stageRegistrationList:(id)arg1;
- (id)fileUploadURLsAtIndex:(unsigned long long)arg1 fileTypes:(id *)arg2;
- (void)updateSupportedTypeIdentifiers:(id)arg1;
- (id)typeIdentifiersToLoad:(id)arg1;
- (id)_preLoadedDataConformingToType:(id)arg1 forItemProviderAtIndex:(unsigned long long)arg2;
- (id)itemProviderAtIndex:(unsigned long long)arg1;
- (void)enumerateItemProvidersWithBlock:(CDUnknownBlockType)arg1;

@end
