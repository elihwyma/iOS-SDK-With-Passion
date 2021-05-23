/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString;

@interface HDHealthServiceCharacteristic : NSObject

{
    NSDate *_updateTime;
}

@property (nonatomic, readonly) NSDate *updateTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)uuid;
+ (unsigned char)uint8FromData:(const char **)arg1 before:(const char *)arg2;
+ (unsigned int)uint32FromData:(const char **)arg1 before:(const char *)arg2;
+ (id)_buildWithBinaryValue:(id)arg1 error:(id *)arg2;
+ (unsigned short)uint16FromData:(const char **)arg1 before:(const char *)arg2;
+ (id)buildWithBinaryValue:(id)arg1 updateTime:(id)arg2 error:(id *)arg3;
+ (float)floatFromSFLOAT:(unsigned short)arg1;
+ (double)doubleFromFLOAT:(unsigned int)arg1;
+ (short)int16FromData:(const char **)arg1 before:(const char *)arg2;
+ (unsigned int)uint24FromData:(const char **)arg1 before:(const char *)arg2;
+ (float)floatFromSFLOATData:(const char **)arg1 before:(const char *)arg2;
+ (double)doubleFromFLOATData:(const char **)arg1 before:(const char *)arg2;
+ (id)dateFromData:(const char **)arg1 before:(const char *)arg2;
+ (_Bool)uint8:(unsigned char)arg1 toData:(char **)arg2 before:(const char *)arg3;
+ (_Bool)uint16:(unsigned short)arg1 toData:(char **)arg2 before:(const char *)arg3;
+ (_Bool)uint32:(unsigned int)arg1 toData:(char **)arg2 before:(const char *)arg3;

- (id)_init;
- (id)getBinaryValueWithError:(id *)arg1;
- (void)unitTest_setUpdateTime:(id)arg1;

@end
