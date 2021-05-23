/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDHealthServiceCharacteristic.h>

@class NSDate, NSString;

@interface HDFitnessMachineDataCharacteristicBase : HDHealthServiceCharacteristic

@property (nonatomic, readonly) NSDate *updateTime;
@property (nonatomic, readonly) _Bool elapsedTimeIsSet;
@property (nonatomic, readonly) unsigned short elapsedTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)uuid;
+ (unsigned char)flagFieldLength;
+ (id)_buildWithBinaryValue:(id)arg1 error:(id *)arg2;

- (id)allFields;
- (id)generateDatums:(id)arg1;
- (id)getBinaryValueWithError:(id *)arg1;

@end
