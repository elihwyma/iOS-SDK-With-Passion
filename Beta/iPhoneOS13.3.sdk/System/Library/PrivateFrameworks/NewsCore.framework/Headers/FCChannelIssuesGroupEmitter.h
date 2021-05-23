/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class NSSet, NSString;

@interface FCChannelIssuesGroupEmitter : NSObject

{
    NSString *_channelIdentifier;
}

@property (retain, nonatomic) NSString *channelIdentifier;
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
- (id)initWithChannelIdentifier:(id)arg1;

@end
