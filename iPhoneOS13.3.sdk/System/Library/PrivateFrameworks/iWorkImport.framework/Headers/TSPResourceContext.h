//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, NSMapTable, NSSet, TSPDocumentResourceCache, TSPDocumentResourceLegacyRegistry, TSPDocumentResourceRegistry;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface TSPResourceContext : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSHashTable *_accessQueue_resourceRequests;
    NSMapTable *_accessQueue_resourceRequestTable;
    TSPDocumentResourceCache *_documentResourceCache;
    TSPDocumentResourceRegistry *_documentResourceRegistry;
    TSPDocumentResourceLegacyRegistry *_sageDocumentResourceLegacyRegistry;
    TSPDocumentResourceLegacyRegistry *_tangierDocumentResourceLegacyRegistry;
}

@property(readonly, nonatomic) TSPDocumentResourceLegacyRegistry *tangierDocumentResourceLegacyRegistry; // @synthesize tangierDocumentResourceLegacyRegistry=_tangierDocumentResourceLegacyRegistry;
@property(readonly, nonatomic) TSPDocumentResourceLegacyRegistry *sageDocumentResourceLegacyRegistry; // @synthesize sageDocumentResourceLegacyRegistry=_sageDocumentResourceLegacyRegistry;
@property(readonly, nonatomic) TSPDocumentResourceRegistry *documentResourceRegistry; // @synthesize documentResourceRegistry=_documentResourceRegistry;
@property(readonly, nonatomic) TSPDocumentResourceCache *documentResourceCache; // @synthesize documentResourceCache=_documentResourceCache;
// - (void).cxx_destruct;
- (id)newDataStorageForDocumentResourceInfo:(id)arg1 createResourceRequestIfNeeded:(BOOL)arg2 error:(id )arg3;
- (id)performResourceAccessUsingQueue:(id)arg1 block:(id /* CDUnknownBlockType */)arg2;
- (void)conditionallyBeginAccessingResourcesWithCompletionQueue:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)removeResourceRequests:(id)arg1;
- (void)accessQueue_addResourceRequest:(id)arg1;
- (void)addResourceRequests:(id)arg1;
@property(readonly) NSSet *resourceRequests;
- (id)initWithDocumentResourceCache:(id)arg1 documentResourceRegistry:(id)arg2 sageDocumentResourceLegacyRegistry:(id)arg3 tangierDocumentResourceLegacyRegistry:(id)arg4;
- (id)init;

@end

