/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Foundation/NSObject.h>

@interface MTLHeapDescriptor : NSObject

@property (nonatomic) unsigned long long size;
@property (nonatomic) unsigned long long storageMode;
@property (nonatomic) unsigned long long cpuCacheMode;
@property (nonatomic) unsigned long long hazardTrackingMode;
@property (nonatomic) unsigned long long resourceOptions;
@property (nonatomic) long long type;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone *)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
