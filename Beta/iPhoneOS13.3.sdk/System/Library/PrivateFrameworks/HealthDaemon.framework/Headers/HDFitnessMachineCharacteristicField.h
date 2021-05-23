/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@interface HDFitnessMachineCharacteristicField : NSObject

{
    _Bool _flagFieldFlipped;
    unsigned char _correspondingFlagBit;
    unsigned char _fieldLength;
    unsigned char _factor;
    _Bool _isSet;
}

@property (nonatomic) _Bool flagFieldFlipped;
@property (nonatomic, readonly) unsigned char correspondingFlagBit;
@property (nonatomic, readonly) unsigned char fieldLength;
@property (nonatomic, readonly) unsigned char factor;
@property (nonatomic) _Bool isSet;

- (id)initWithCorrespondingFlagBit:(unsigned char)arg1 fieldLength:(unsigned char)arg2 factor:(unsigned char)arg3;
- (_Bool)isIncludedInFlags:(unsigned int)arg1;
- (void)setValueWithBytes:(const char **)arg1 before:(const char *)arg2;
- (id)valueFromDouble:(double)arg1;
- (id)valueAsData;
- (void)markFieldSet;

@end
