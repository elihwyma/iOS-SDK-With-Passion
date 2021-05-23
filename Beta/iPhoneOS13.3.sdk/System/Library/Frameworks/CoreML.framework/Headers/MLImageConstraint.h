/*
 Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

#import <NSObject.h>

#import <CoreML/Swift-Protocol.h>

@class MLImageSizeConstraint;

@interface MLImageConstraint : NSObject <Swift>

{
    long long _pixelsHigh;
    long long _pixelsWide;
    MLImageSizeConstraint *_sizeConstraint;
    unsigned long long _pixelType;
}

@property (readonly) unsigned long long imageHeight;
@property (readonly) unsigned long long imageWidth;
@property (readonly) unsigned long long pixelType;
@property (readonly) unsigned int osType;
@property (nonatomic, readonly) long long pixelsHigh;
@property (nonatomic, readonly) long long pixelsWide;
@property (nonatomic, readonly) unsigned int pixelFormatType;
@property (nonatomic, readonly) MLImageSizeConstraint *sizeConstraint;

+ (_Bool)supportsSecureCoding;
+ (id)_stringForOSType:(unsigned int)arg1;
+ (_Bool)osType:(unsigned int)arg1 isAcceptedForPixelType:(unsigned long long)arg2;
+ (id)constraintWithPixelsWide:(long long)arg1 pixelsHigh:(long long)arg2 pixelType:(unsigned long long)arg3 sizeConstraint:(id)arg4;
+ (id)constraintWithPixelsWide:(long long)arg1 pixelsHigh:(long long)arg2 pixelType:(unsigned long long)arg3;
+ (unsigned long long)imagePixelTypeFromOSType:(unsigned int)arg1;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isAllowedValue:(id)arg1 error:(id *)arg2;
- (id)initWithPixelsWide:(long long)arg1 pixelsHigh:(long long)arg2 pixelType:(unsigned long long)arg3 sizeConstraint:(id)arg4;
- (id)_stringForAllowedOSTypes;

@end
