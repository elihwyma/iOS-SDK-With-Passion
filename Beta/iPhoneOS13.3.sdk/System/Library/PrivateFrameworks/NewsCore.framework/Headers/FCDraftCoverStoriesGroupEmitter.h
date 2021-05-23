/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCDraftArticlesFeedGroupEmitter.h>

@interface FCDraftCoverStoriesGroupEmitter : FCDraftArticlesFeedGroupEmitter

+ (id)groupEmitterIdentifier;

- (_Bool)wantsToEmitGroupInContext:(id)arg1 fromCursor:(id)arg2 toCursor:(id)arg3;
- (id)operationToEmitGroupWithContext:(id)arg1 fromCursor:(id)arg2 toCursor:(id)arg3;
- (_Bool)emitsSingletonGroups;

@end
