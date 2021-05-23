/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class NSData, NSString, NSUUID;

@interface HDFitnessMachineSimulatorSupport : NSObject

{
    unsigned long long _fitnessMachineType;
    NSUUID *_uuid;
}

@property (nonatomic, readonly) unsigned long long fitnessMachineType;
@property (nonatomic, readonly) NSUUID *uuid;
@property (nonatomic, readonly) NSData *btIdentifierData;
@property (nonatomic, readonly) NSString *btIdentifier;

- (id)initWithFitnessMachineType:(unsigned long long)arg1;
- (void)updateAdvertisementDataForSimulation:(id)arg1;

@end
