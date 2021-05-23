/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class _DKContentProviderCache, _DKKnowledgeContentProvider;

@protocol OS_dispatch_queue, _DKKnowledgeQuerying;

@interface _DKQueryDispatcher : NSObject

{
    _DKContentProviderCache *_contentProviderCache;
    NSObject<OS_dispatch_queue> *_queryQueue;
    NSObject<OS_dispatch_queue> *_defaultResponseQueue;
    id <_DKKnowledgeQuerying> _knowledgeStore;
    _DKKnowledgeContentProvider *_knowledgeContentProvider;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queryQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *defaultResponseQueue;
@property (retain, nonatomic) id <_DKKnowledgeQuerying> knowledgeStore;
@property (retain, nonatomic) _DKKnowledgeContentProvider *knowledgeContentProvider;
@property (retain, nonatomic) _DKContentProviderCache *contentProviderCache;

- (id)executeQuery:(id)arg1 error:(id *)arg2;
- (id)initWithKnowledgeStore:(id)arg1;
- (void)executeQuery:(id)arg1 responseQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)executeQuery:(id)arg1 responseQueue:(id)arg2;
- (id)contentProviderQueriesFromQuery:(id)arg1 error:(id *)arg2;

@end
