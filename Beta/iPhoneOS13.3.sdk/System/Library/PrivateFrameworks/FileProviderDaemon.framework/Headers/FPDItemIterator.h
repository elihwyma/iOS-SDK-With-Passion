/*
 Image: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
 */

#import <FileProviderDaemon/FPDIterator.h>

@class FPDDomain, FPDExtension, FPItem, NSError, NSMutableArray, NSObject, NSString;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface FPDItemIterator : FPDIterator

{
    NSObject<OS_dispatch_queue> *_queue;
    FPItem *_current;
    unsigned long long _numFoldersPoped;
    _Bool _done;
    NSError *_error;
    NSMutableArray *_enumeratorByDepth;
    NSMutableArray *_remainingItemsByDepth;
    FPDExtension *_provider;
    FPDDomain *_domain;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) int requestEffectivePID;
@property (readonly) NSString *prettyDescription;

- (void)dealloc;
- (id)error;
- (void)_next;
- (_Bool)done;
- (void)_invalidateWithError:(id)arg1;
- (void)enumerationResultsDidChange;
- (void)didUpdateItem:(id)arg1;
- (void)_pushFolder:(id)arg1;
- (void)_popFolder;
- (void)_decorateItem:(id)arg1;
- (_Bool)_createEnumerator;
- (_Bool)_enumerateMoreItems;
- (id)_popItem;
- (_Bool)_shouldTraverseSubTree:(id)arg1;
- (id)initWithItem:(id)arg1 provider:(id)arg2;
- (id)nextWithError:(id *)arg1;
- (unsigned long long)numFoldersPopped;

@end
