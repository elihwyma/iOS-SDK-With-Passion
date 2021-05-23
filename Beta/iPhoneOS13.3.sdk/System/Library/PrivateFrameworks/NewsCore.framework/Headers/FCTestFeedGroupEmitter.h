/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCSingleTagFeedGroupEmitter.h>

@interface FCTestFeedGroupEmitter : FCSingleTagFeedGroupEmitter

{
    _Bool _disableFiltering;
    _Bool _enableSingletonGroups;
}

@property (nonatomic) _Bool disableFiltering;
@property (nonatomic) _Bool enableSingletonGroups;

+ (_Bool)canMergeGroupsUnconditionally;

- (id)operationToEmitGroupWithContext:(id)arg1 fromCursor:(id)arg2 toCursor:(id)arg3;
- (_Bool)emitsSingletonGroups;
- (Class)classForGroupEmittingOperation;

@end
