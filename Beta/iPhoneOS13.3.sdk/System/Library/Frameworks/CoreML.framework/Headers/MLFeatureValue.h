/*
 Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

#import <NSObject.h>

@class MLMultiArray, MLSequence, NSDictionary, NSString;

@interface MLFeatureValue : NSObject

{
    _Bool _undefined;
    long long _type;
    id _value;
    NSObject *_objectValue;
}

@property (retain) id value;
@property (retain, nonatomic) NSObject *objectValue;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly, getter=isUndefined) _Bool undefined;
@property (nonatomic, readonly) long long int64Value;
@property (nonatomic, readonly) double doubleValue;
@property (copy, nonatomic, readonly) NSString *stringValue;
@property (nonatomic, readonly) MLMultiArray *multiArrayValue;
@property (nonatomic, readonly) NSDictionary *dictionaryValue;
@property (nonatomic, readonly) struct __CVBuffer *imageBufferValue;
@property (nonatomic, readonly) MLSequence *sequenceValue;

+ (id)featureValueWithPixelBuffer:(struct __CVBuffer *)arg1;
+ (id)featureValueWithMultiArray:(id)arg1;
+ (id)undefinedFeatureValueWithType:(long long)arg1;
+ (id)featureValueWithInt64:(long long)arg1;
+ (id)featureValueWithDouble:(double)arg1;
+ (id)featureValueWithString:(id)arg1;
+ (id)featureValueWithSequence:(id)arg1;
+ (id)featureValueWithDictionary:(id)arg1 error:(id *)arg2;
+ (id)featureValueWithStringKeyDictionary:(id)arg1;
+ (id)featureValueWithInt64KeyDictionary:(id)arg1;
+ (id)featureValueOfType:(long long)arg1 fromObject:(id)arg2 error:(id *)arg3;
+ (id)featureValueWithImageAtURL:(id)arg1 constraint:(id)arg2 options:(id)arg3 error:(id *)arg4;
+ (struct CGRect)cropRectFromOptions:(id)arg1;
+ (unsigned long long)visionCropAndScaleOptionFromOptions:(id)arg1;
+ (id)featureValueWithCGImage:(struct CGImage *)arg1 constraint:(id)arg2 options:(id)arg3 error:(id *)arg4;
+ (id)featureValueWithImageAtURL:(id)arg1 pixelsWide:(long long)arg2 pixelsHigh:(long long)arg3 pixelFormatType:(unsigned int)arg4 options:(id)arg5 error:(id *)arg6;
+ (id)featureValueWithCGImage:(struct CGImage *)arg1 pixelsWide:(long long)arg2 pixelsHigh:(long long)arg3 pixelFormatType:(unsigned int)arg4 options:(id)arg5 error:(id *)arg6;
+ (id)featureValueWithImageAtURL:(id)arg1 orientation:(unsigned int)arg2 pixelsWide:(long long)arg3 pixelsHigh:(long long)arg4 pixelFormatType:(unsigned int)arg5 options:(id)arg6 error:(id *)arg7;
+ (id)featureValueWithImageAtURL:(id)arg1 orientation:(unsigned int)arg2 constraint:(id)arg3 options:(id)arg4 error:(id *)arg5;
+ (id)featureValueWithCGImage:(struct CGImage *)arg1 orientation:(unsigned int)arg2 pixelsWide:(long long)arg3 pixelsHigh:(long long)arg4 pixelFormatType:(unsigned int)arg5 options:(id)arg6 error:(id *)arg7;
+ (id)featureValueWithCGImage:(struct CGImage *)arg1 orientation:(unsigned int)arg2 constraint:(id)arg3 options:(id)arg4 error:(id *)arg5;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)debugQuickLookObject;
- (id)initWithValue:(id)arg1 type:(long long)arg2;
- (id)initWithUndefinedValueAndType:(long long)arg1;
- (_Bool)isEqualToFeatureValue:(id)arg1;
- (id)getFeatureSize:(id *)arg1;
- (id)getFeatureSize:(id *)arg1 ndArrayMode:(_Bool)arg2;

@end
