/*
 Image: /System/Library/PrivateFrameworks/UsageTracking.framework/UsageTracking
 */

#import <Foundation/NSObject.h>

@protocol _DKKnowledgeDeleting><_DKKnowledgeQuerying;

@interface USWebHistory : NSObject

{
    id <_DKKnowledgeDeleting><_DKKnowledgeQuerying> _eventStorage;
}

@property (readonly) id <_DKKnowledgeDeleting><_DKKnowledgeQuerying> eventStorage;

- (id)init;
- (id)initWithEventStorage:(id)arg1;
- (void)_deleteEventsWithPredicate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)deleteHistoryForURL:(id)arg1 webApplication:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)deleteHistoryForDomain:(id)arg1 webApplication:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)deleteHistoryDuringInterval:(id)arg1 webApplication:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)deleteAllHistoryForApplication:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
