/*
 Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface DNDSModeAssertionStore : NSObject

{
    NSArray *_assertions;
    NSArray *_invalidations;
    NSArray *_invalidationRequests;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSArray *assertions;
@property (copy, nonatomic, readonly) NSArray *invalidations;
@property (copy, nonatomic, readonly) NSArray *invalidationRequests;

+ (id)newWithDictionaryRepresentation:(id)arg1;
+ (id)newWithSyncDictionaryRepresentation:(id)arg1;
+ (id)messageDateForSyncDictionaryRepresentation:(id)arg1;
+ (id)upgradeDictionaryRepresentation:(id)arg1 fromVersionNumber:(unsigned long long)arg2 toVersionNumber:(unsigned long long)arg3;
+ (id)newWithPeaceSyncDictionaryRepresentation:(id)arg1;
+ (id)messageDateForPeaceSyncDictionaryRepresentation:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (id)lastUpdateDate;
- (id)_initWithStore:(id)arg1;
- (id)syncDictionaryRepresentationWithDate:(id)arg1 messageUUID:(id)arg2;
- (id)sysdiagnoseDictionaryRepresentation;
- (id)peaceSyncDictionaryRepresentationWithDate:(id)arg1 messageUUID:(id)arg2 userRequestedClientIdentifierHandler:(CDUnknownBlockType)arg3;

@end
