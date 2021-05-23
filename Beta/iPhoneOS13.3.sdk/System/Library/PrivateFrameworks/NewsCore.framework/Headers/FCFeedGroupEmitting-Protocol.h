/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/Swift-Protocol.h>

@class NSSet;

@protocol FCFeedGroupEmitting <Swift>

@property (copy, nonatomic, readonly) NSSet *emittableGroupTypes;
@property (nonatomic, readonly) _Bool shouldEmitContentInFavoritesOnlyMode;
@property (nonatomic, readonly) _Bool emitsSingletonGroups;
@property (nonatomic, readonly) _Bool emitsSingleRefreshSessionGroups;
@property (nonatomic, readonly) long long requiredForYouContentTypes;
@property (nonatomic, readonly) _Bool requiresHeavyweightContent;
@property (nonatomic, readonly) _Bool isRequiredByFollowingEmitters;

+ (unsigned short)groupEmitterIdentifier;

- (unsigned short)wantsToEmitGroupInContext:fromCursor:toCursor: /* Error: Ran out of types for this method. */;
- (unsigned short)operationToEmitGroupWithContext:fromCursor:toCursor: /* Error: Ran out of types for this method. */;

+ (unsigned short)canMergeGroupsUnconditionally;

- (unsigned short)canDeferEmittingGroupInContext: /* Error: Ran out of types for this method. */;
- (unsigned short)supportsPagination;
- (unsigned short)canMergeHeadlinesFromGroup:intoGroup: /* Error: Ran out of types for this method. */;
- (unsigned short)backingChannelTagIDWithConfiguration: /* Error: Ran out of types for this method. */;
- (unsigned short)emitsSingletonGroups;
- (unsigned short)emitsSingleRefreshSessionGroups;
- (unsigned short)requiredForYouContentTypes;
- (unsigned short)requiresHeavyweightContent;
- (unsigned short)isRequiredByFollowingEmitters;

@end
