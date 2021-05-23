/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSObject.h>

@interface PVMatrix44Double : NSObject

{
    CDStruct_14d5dc5e _SIMDDouble4x4;
}

@property (nonatomic) CDStruct_14d5dc5e SIMDFloat4x4;
@property (nonatomic) CDStruct_14d5dc5e SIMDDouble4x4;

+ (_Bool)supportsSecureCoding;
+ (id)matrix;
+ (id)matrixWithSIMDDouble4x4:(CDStruct_14d5dc5e)arg1;
+ (id)matrixWithSIMDFloat4x4:(CDStruct_14d5dc5e)arg1;
+ (id)matrixWithPCMatrix44Double:(id)arg1;
+ (id)matrixWithPCMatrix44d:(const void *)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isIdentity;
- (id)extendedDescription;
- (id)compactDescription;
- (void)transpose;
- (void)makeIdentity;
- (id)initWithSIMDFloat4x4:(CDStruct_14d5dc5e)arg1;
- (id)initWithSIMDDouble4x4:(CDStruct_14d5dc5e)arg1;
- (struct PVTransformInfo)getTransformInfo:(id *)arg1;
- (double)valueAtCol:(unsigned long long)arg1 row:(unsigned long long)arg2;
- (void)setValue:(double)arg1 col:(unsigned long long)arg2 row:(unsigned long long)arg3;
- (id)initWithPCMatrix44Double:(id)arg1;
- (id)initWithPCMatrix44d:(const void *)arg1;
- (void)setPCMatrix44d:(const void *)arg1;
- (id)pcMatrix44Double;
- (void)setPCMatrix44Double:(id)arg1;
- (void)getPCMatrix44d:(void *)arg1;

@end
