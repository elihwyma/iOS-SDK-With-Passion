/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <Foundation/NSObject.h>

@interface SBFColorBoxes : NSObject

{
    struct CGSize _imageSize;
    unsigned char _totalContrast8;
    unsigned long long _downsampledBoxSize;
    unsigned long long _effectiveDownsampleFactor;
    unsigned long long _pixelHeight;
    unsigned long long _pixelWidth;
    CDStruct_a06f635e *_colorBoxesRowMajor;
    unsigned long long _rowCount;
    unsigned long long _columnCount;
    unsigned long long _size;
}

@property (nonatomic, readonly) struct CGSize imageSize;
@property (nonatomic, readonly) unsigned long long downsampledBoxSize;
@property (nonatomic, readonly) unsigned long long effectiveDownsampleFactor;
@property (nonatomic, readonly) unsigned long long pixelHeight;
@property (nonatomic, readonly) unsigned long long pixelWidth;
@property (nonatomic, readonly) unsigned char totalContrast8;
@property (nonatomic, readonly) CDStruct_a06f635e *colorBoxesRowMajor;
@property (nonatomic, readonly) unsigned long long rowCount;
@property (nonatomic, readonly) unsigned long long columnCount;
@property (nonatomic, readonly) unsigned long long size;

+ (_Bool)supportsSecureCoding;
+ (id)colorBoxesForImage:(id)arg1;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (double)contrast;
- (id)initWithColorBoxes:(CDStruct_a06f635e *)arg1 size:(unsigned long long)arg2 rowCount:(unsigned long long)arg3 columnCount:(unsigned long long)arg4 totalContrast8:(unsigned char)arg5 imageSize:(struct CGSize)arg6 downsampledBoxSize:(unsigned long long)arg7 effectiveDownsampleFactor:(unsigned long long)arg8 pixelHeight:(unsigned long long)arg9 pixelWidth:(unsigned long long)arg10;
- (struct CGRect)rectForColorBoxAtRow:(unsigned long long)arg1 col:(unsigned long long)arg2;
- (CDStruct_a06f635e *)colorBoxAtRow:(unsigned long long)arg1 col:(unsigned long long)arg2;

@end
