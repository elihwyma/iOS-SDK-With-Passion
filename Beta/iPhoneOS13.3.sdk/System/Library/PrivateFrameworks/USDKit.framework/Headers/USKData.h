/*
 Image: /System/Library/PrivateFrameworks/USDKit.framework/USDKit
 */

#import <Foundation/NSObject.h>

@class MISSING_TYPE, NSData, NSString;

@interface USKData : NSObject

{
    struct VtValue _value;
    NSString *_type;
    unsigned long long _arraySize;
}

@property (nonatomic, readonly) NSString *type;
@property (nonatomic, readonly) unsigned long long arraySize;
@property (retain, nonatomic, readonly) NSData *dataNoCopy;

- (float)floatValue;
- (double)doubleValue;
- (id)initWithInt:(int)arg1;
- (id)initWithDouble:(double)arg1;
- (int)intValue;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (_Bool)boolValue;
- (id)stringValue;
- (id)initWithURL:(id)arg1;
- (id)initWithString:(id)arg1;
- (struct VtValue)value;
- (id)resourcePath;
- (id)initWithBool:(_Bool)arg1;
- (id)initWithFloat:(float)arg1;
- (void)setValue:(struct VtValue)arg1;
- (id).cxx_construct;
- (void)setStringValue:(id)arg1;
- (void)setDoubleValue:(double)arg1;
- (id)initWithToken:(id)arg1;
- (id)urlValue;
- (void)setBoolValue:(_Bool)arg1;
- (void)setResourcePath:(id)arg1;
- (id)initWithStringArray:(id)arg1;
- (id)stringArray;
- (void)setIntValue:(int)arg1;
- (MISSING_TYPE *)float2Value;
- (MISSING_TYPE *)float3Value;
- (MISSING_TYPE *)float4Value;
- (void)setFloatValue:(float)arg1;
- (void)setURLValue:(id)arg1;
- (void)setFloat2Value: /* Error: Ran out of types for this method. */;
- (void)setFloat3Value: /* Error: Ran out of types for this method. */;
- (void)setFloat4Value: /* Error: Ran out of types for this method. */;
- (void)setDouble4x4Array:(CDStruct_f1db2b5e *)arg1 count:(unsigned long long)arg2;
- (void)setTokenValue:(id)arg1;
- (void)setIntArray:(int *)arg1 count:(unsigned long long)arg2;
- (void)setFloat3Array:(MISSING_TYPE **)arg1 count:(unsigned long long)arg2;
- (void)setFloat2Array:(MISSING_TYPE **)arg1 count:(unsigned long long)arg2;
- (void)setStringArray:(id)arg1;
- (void)setFloatArray:(float *)arg1 count:(unsigned long long)arg2;
- (void)setDouble4x4Value:(CDStruct_f1db2b5e)arg1;
- (void)setDouble3Value: /* Error: Ran out of types for this method. */;
- (void)setQuatfValue:(struct)arg1;
- (void)setTokenArray:(id)arg1;
- (CDStruct_f1db2b5e)double4x4Value;
- (id)tokenValue;
- (id)initWithFloat3: /* Error: Ran out of types for this method. */;
- (id)initWithFloat4: /* Error: Ran out of types for this method. */;
- (unsigned long long)double4x4Array:(CDStruct_f1db2b5e *)arg1 maxCount:(unsigned long long)arg2;
- (id)tokenArray;
- (id)initWithVtValue:(struct VtValue)arg1 typeName:(struct TfToken)arg2;
- (CDStruct_f1db2b5e)float4x4Value;
- (MISSING_TYPE *)double2Value;
- (MISSING_TYPE *)double3Value;
- (MISSING_TYPE *)double4Value;
- (struct)quatfValue;
- (id)objectPathValue;
- (unsigned long long)intArray:(int *)arg1 maxCount:(unsigned long long)arg2;
- (unsigned long long)quatfArray:(struct *)arg1 maxCount:(unsigned long long)arg2;
- (id)pathArray;
- (id)resourcePathArray;
- (unsigned long long)floatArray:(float *)arg1 maxCount:(unsigned long long)arg2;
- (unsigned long long)float2Array:(MISSING_TYPE **)arg1 maxCount:(unsigned long long)arg2;
- (unsigned long long)float3Array:(MISSING_TYPE **)arg1 maxCount:(unsigned long long)arg2;
- (unsigned long long)float4Array:(MISSING_TYPE **)arg1 maxCount:(unsigned long long)arg2;
- (unsigned long long)float4x4Array:(CDStruct_f1db2b5e *)arg1 maxCount:(unsigned long long)arg2;
- (unsigned long long)doubleArray:(double *)arg1 maxCount:(unsigned long long)arg2;
- (unsigned long long)double2Array:(MISSING_TYPE **)arg1 maxCount:(unsigned long long)arg2;
- (unsigned long long)double3Array:(MISSING_TYPE **)arg1 maxCount:(unsigned long long)arg2;
- (unsigned long long)double4Array:(MISSING_TYPE **)arg1 maxCount:(unsigned long long)arg2;
- (void)setObjectPathValue:(id)arg1;
- (void)setDouble2Value: /* Error: Ran out of types for this method. */;
- (void)setDouble4Value: /* Error: Ran out of types for this method. */;
- (void)setQuatfArray:(struct *)arg1 count:(unsigned long long)arg2;
- (void)setResourcePathArray:(id)arg1;
- (void)setFloat4Array:(MISSING_TYPE **)arg1 count:(unsigned long long)arg2;
- (void)setDoubleArray:(double *)arg1 count:(unsigned long long)arg2;
- (void)setDouble2Array:(MISSING_TYPE **)arg1 count:(unsigned long long)arg2;
- (void)setDouble3Array:(MISSING_TYPE **)arg1 count:(unsigned long long)arg2;
- (void)setDouble4Array:(MISSING_TYPE **)arg1 count:(unsigned long long)arg2;
- (id)initWithObjectPath:(id)arg1;
- (id)initWithResourcePath:(id)arg1;
- (id)initWithFloat2: /* Error: Ran out of types for this method. */;
- (id)initWithDouble2: /* Error: Ran out of types for this method. */;
- (id)initWithDouble3: /* Error: Ran out of types for this method. */;
- (id)initWithDouble4: /* Error: Ran out of types for this method. */;
- (id)initWithDouble4x4:(CDStruct_f1db2b5e)arg1;
- (id)initWithQuatf:(struct)arg1;
- (id)initWithIntArray:(int *)arg1 count:(unsigned long long)arg2;
- (id)initWithQuatfArray:(struct *)arg1 count:(unsigned long long)arg2;
- (id)initWithTokenArray:(id)arg1;
- (id)initWithResourcePathArray:(id)arg1;
- (id)initWithFloatArray:(float *)arg1 count:(unsigned long long)arg2;
- (id)initWithFloat2Array:(MISSING_TYPE **)arg1 count:(unsigned long long)arg2;
- (id)initWithFloat3Array:(MISSING_TYPE **)arg1 count:(unsigned long long)arg2;
- (id)initWithFloat4Array:(MISSING_TYPE **)arg1 count:(unsigned long long)arg2;
- (id)initWithDoubleArray:(double *)arg1 count:(unsigned long long)arg2;
- (id)initWithDouble2Array:(MISSING_TYPE **)arg1 count:(unsigned long long)arg2;
- (id)initWithDouble3Array:(MISSING_TYPE **)arg1 count:(unsigned long long)arg2;
- (id)initWithDouble4Array:(MISSING_TYPE **)arg1 count:(unsigned long long)arg2;
- (id)initWithDouble4x4Array:(CDStruct_f1db2b5e *)arg1 count:(unsigned long long)arg2;

@end
