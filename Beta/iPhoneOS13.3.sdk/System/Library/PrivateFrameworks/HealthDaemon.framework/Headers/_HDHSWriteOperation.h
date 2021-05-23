/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDHealthServiceCharacteristic;

@interface _HDHSWriteOperation : NSObject

{
    _Bool _expectResponse;
    HDHealthServiceCharacteristic *_characteristic;
    CDUnknownBlockType _completion;
}

@property (retain, nonatomic) HDHealthServiceCharacteristic *characteristic;
@property (nonatomic) _Bool expectResponse;
@property (copy, nonatomic) CDUnknownBlockType completion;

@end
