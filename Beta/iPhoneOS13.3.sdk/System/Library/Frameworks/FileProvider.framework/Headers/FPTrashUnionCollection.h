/*
 Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

#import <FileProvider/FPUnionCollection.h>

@class FPQueryCollection, NSObject;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface FPTrashUnionCollection : FPUnionCollection

{
    id _providerDomainChangesToken;
    FPQueryCollection *_trashQueryCollection;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) FPQueryCollection *trashQueryCollection;

- (id)scopedSearchQuery;
- (void)setDesiredNumberOfItems:(id)arg1;
- (void)setAllowedFileTypes:(id)arg1;
- (void)setExcludedFileTypes:(id)arg1;
- (id)filterDomains:(id)arg1;
- (void)updateCollectionsForDomains:(id)arg1;
- (void)fetchTrashItemsFromProvider:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithQueryCollection:(id)arg1;

@end
