/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol RERelevanceEngineObserver;

@interface _RERelevanceEngineObserverWrapper : NSObject

{
    struct {
        unsigned int implementsPerformBatchUpdate:1;
        unsigned int implementsReloadElement:1;
        unsigned int implementsRemoveElement:1;
        unsigned int implementsInsertElement:1;
        unsigned int implementsMoveElement:1;
        unsigned int implementsElementIsVisible:1;
        unsigned int implementsRelevanceUpdate:1;
        unsigned int implementsRelevanceUpdateBegan:1;
        unsigned int implementsRelevanceUpdateFinished:1;
    } _observerCallbacks;
    id <RERelevanceEngineObserver> _observer;
}

@property (weak, nonatomic, readonly) id <RERelevanceEngineObserver> observer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithObserver:(id)arg1;
- (void)relevanceEngineDidBeginUpdatingRelevance:(id)arg1;
- (void)relevanceEngineDidFinishUpdatingRelevance:(id)arg1;
- (void)relevanceEngine:(id)arg1 didInsertElement:(id)arg2 atPath:(id)arg3;
- (void)relevanceEngine:(id)arg1 didRemoveElement:(id)arg2 atPath:(id)arg3;
- (void)relevanceEngine:(id)arg1 didMoveElement:(id)arg2 fromPath:(id)arg3 toPath:(id)arg4;
- (_Bool)relevanceEngine:(id)arg1 isElementAtPathVisible:(id)arg2;
- (void)relevanceEngine:(id)arg1 didUpdateRelevanceForElement:(id)arg2;
- (void)relevanceEngine:(id)arg1 performBatchUpdateBlock:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)relevanceEngine:(id)arg1 didReloadElement:(id)arg2 atPath:(id)arg3;

@end
