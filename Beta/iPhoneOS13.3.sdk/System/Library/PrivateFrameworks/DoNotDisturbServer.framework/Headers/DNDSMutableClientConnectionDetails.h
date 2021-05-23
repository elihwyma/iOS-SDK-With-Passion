/*
 Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
 */

#import <DoNotDisturbServer/DNDSClientConnectionDetails.h>

@class NSSet, NSUUID;

@interface DNDSMutableClientConnectionDetails : DNDSClientConnectionDetails

@property (copy, nonatomic) NSUUID *interruptionInvalidationAssertionUUID;
@property (copy, nonatomic) NSSet *assertionUpdateClientIdentifiers;
@property (nonatomic) _Bool wantsStateUpdates;
@property (nonatomic) _Bool wantsSettingsUpdates;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
