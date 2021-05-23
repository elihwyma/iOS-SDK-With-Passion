/*
 Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
 */

#import <Foundation/NSObject.h>

@class NSSet, NSUUID;

@interface DNDSClientConnectionDetails : NSObject

{
    NSUUID *_interruptionInvalidationAssertionUUID;
    NSSet *_assertionUpdateClientIdentifiers;
    _Bool _wantsStateUpdates;
    _Bool _wantsSettingsUpdates;
}

@property (copy, nonatomic, readonly) NSUUID *interruptionInvalidationAssertionUUID;
@property (copy, nonatomic, readonly) NSSet *assertionUpdateClientIdentifiers;
@property (nonatomic, readonly) _Bool wantsStateUpdates;
@property (nonatomic, readonly) _Bool wantsSettingsUpdates;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)_initWithDetails:(id)arg1;
- (id)_initWithInterruptionInvalidationAssertionUUID:(id)arg1 assertionUpdateClientIdentifiers:(id)arg2 wantsStateUpdates:(_Bool)arg3 wantsSettingsUpdates:(_Bool)arg4;

@end
