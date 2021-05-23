/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class NSUUID, NTKComplication;

@interface _NTKComplicationCacheKey : NSObject

{
    long long _family;
    NTKComplication *_complication;
    NSUUID *_deviceUUID;
}

@property (readonly) NTKComplication *complication;
@property (readonly) long long family;
@property (readonly) NSUUID *deviceUUID;

+ (id)keyWithFamily:(long long)arg1 complication:(id)arg2 forDevice:(id)arg3;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
