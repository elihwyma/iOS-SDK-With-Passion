/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDHealthServiceCharacteristic.h>

@interface HDHeartRateControlPoint : HDHealthServiceCharacteristic

{
    unsigned char _operation;
}

@property (nonatomic) unsigned char operation;

+ (id)uuid;

- (id)description;
- (id)initWithOperation:(unsigned char)arg1;
- (id)getBinaryValueWithError:(id *)arg1;

@end
