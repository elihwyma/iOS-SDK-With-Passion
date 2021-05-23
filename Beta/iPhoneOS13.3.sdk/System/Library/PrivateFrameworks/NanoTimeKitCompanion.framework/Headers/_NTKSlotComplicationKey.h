/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class NSString, NSUUID, NTKComplication;

@interface _NTKSlotComplicationKey : NSObject

{
    NSString *_slot;
    NTKComplication *_complication;
    NSUUID *_deviceUUID;
}

@property (readonly) NTKComplication *complication;
@property (copy, readonly) NSString *slot;
@property (readonly) NSUUID *deviceUUID;

+ (id)keyWithSlot:(id)arg1 complication:(id)arg2 forDevice:(id)arg3;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
