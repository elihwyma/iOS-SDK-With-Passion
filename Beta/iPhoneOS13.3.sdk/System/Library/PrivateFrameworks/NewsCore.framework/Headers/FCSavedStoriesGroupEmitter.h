/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class FCReadingList, NSSet, NSString;

@interface FCSavedStoriesGroupEmitter : NSObject

{
    unsigned long long _minPrecedingTopicGroups;
    long long _desiredArticlesCount;
    FCReadingList *_readingList;
}

@property (nonatomic) unsigned long long minPrecedingTopicGroups;
@property (nonatomic) long long desiredArticlesCount;
@property (retain, nonatomic) FCReadingList *readingList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSSet *emittableGroupTypes;
@property (nonatomic, readonly) _Bool shouldEmitContentInFavoritesOnlyMode;
@property (nonatomic, readonly) _Bool emitsSingletonGroups;
@property (nonatomic, readonly) _Bool emitsSingleRefreshSessionGroups;
@property (nonatomic, readonly) long long requiredForYouContentTypes;
@property (nonatomic, readonly) _Bool requiresHeavyweightContent;
@property (nonatomic, readonly) _Bool isRequiredByFollowingEmitters;

+ (id)groupEmitterIdentifier;

- (_Bool)wantsToInsertGroupInContext:(id)arg1;
- (_Bool)wantsToEmitGroupInContext:(id)arg1 fromCursor:(id)arg2 toCursor:(id)arg3;
- (id)operationToEmitGroupWithContext:(id)arg1 fromCursor:(id)arg2 toCursor:(id)arg3;
- (id)backingChannelTagIDWithConfiguration:(id)arg1;
- (id)initWithDesiredArticlesCount:(long long)arg1;

@end
