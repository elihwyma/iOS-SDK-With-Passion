/*
 Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

#import <Foundation/NSObject.h>

#import <ModelIO/Swift-Protocol.h>

@interface MDLMatrix4x4Array : NSObject <Swift>

{
    struct VtValue _data;
    unsigned long long _elementCount;
}

@property (nonatomic, readonly) unsigned long long elementCount;
@property (nonatomic, readonly) unsigned long long precision;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)clear;
- (id).cxx_construct;
- (id)initWithElementCount:(unsigned long long)arg1;
- (void)resetWithUsdAttribute:(const struct UsdAttribute *)arg1 time:(double)arg2;
- (struct VtValue)defaultVtValue;
- (void)resetWithUsdAttribute:(const struct UsdAttribute *)arg1;
- (void)setFloat4x4Array:(const CDStruct_14d5dc5e *)arg1 count:(unsigned long long)arg2;
- (void)setDouble4x4Array:(const CDStruct_14d5dc5e *)arg1 count:(unsigned long long)arg2;
- (unsigned long long)getFloat4x4Array:(CDStruct_14d5dc5e *)arg1 maxCount:(unsigned long long)arg2;
- (unsigned long long)getDouble4x4Array:(CDStruct_14d5dc5e *)arg1 maxCount:(unsigned long long)arg2;

@end
