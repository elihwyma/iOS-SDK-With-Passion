/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class NSSet, NSString;

@protocol FCContentContext;

@interface FCGreatStoriesYouMissedGroupEmitter : NSObject

{
    id <FCContentContext> _context;
    unsigned long long _limit;
}

@property (retain, nonatomic) id <FCContentContext> context;
@property (nonatomic) unsigned long long limit;
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
+ (_Bool)greatStoriesMayEmit:(id)arg1;
+ (void)setShouldEmitOverride:(_Bool)arg1;

- (_Bool)wantsToInsertGroupInContext:(id)arg1;
- (_Bool)wantsToEmitGroupInContext:(id)arg1 fromCursor:(id)arg2 toCursor:(id)arg3;
- (id)operationToEmitGroupWithContext:(id)arg1 fromCursor:(id)arg2 toCursor:(id)arg3;

@end
