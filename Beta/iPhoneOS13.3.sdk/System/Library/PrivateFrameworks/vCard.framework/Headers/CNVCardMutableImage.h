/*
 Image: /System/Library/PrivateFrameworks/vCard.framework/vCard
 */

#import <vCard/CNVCardImage.h>

@class NSData, NSDictionary, NSNumber, NSValue;

@interface CNVCardMutableImage : CNVCardImage

{
    NSData *_originalData;
    NSDictionary *_originalCropRects;
    struct CGSize _originalSize;
    struct CGImage *_CGImage;
    _Bool _attemptedCGImage;
    NSValue *_targetSizeValue;
    NSNumber *_compressionQuality;
}

@property (copy, nonatomic, readonly) NSData *originalData;
@property (nonatomic, readonly) NSDictionary *originalCropRects;
@property (nonatomic, readonly) struct CGSize originalSize;
@property (nonatomic, readonly) struct CGImage *CGImage;
@property (nonatomic, readonly) _Bool attemptedCGImage;
@property (copy, nonatomic) NSValue *targetSizeValue;
@property (nonatomic) struct CGSize size;
@property (copy, nonatomic) NSNumber *compressionQuality;

+ (struct CGImage *)CGImageCreateWithData:(id)arg1 maxSizeValue:(id)arg2;
+ (id)scaleCropRects:(id)arg1 factor:(double)arg2;
+ (struct CGRect)scaleRect:(struct CGRect)arg1 byFactor:(double)arg2;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)data;
- (id)cropRects;
- (id)initWithData:(id)arg1 cropRects:(id)arg2 size:(struct CGSize)arg3;
- (void)describePropertiesWithBuilder:(id)arg1;
- (void)nts_updateRepresentation;
- (void)nts_invalidateImageSize;
- (void)nts_invalidateImageQuality;
- (id)JPEGRepresentationOfCGImage:(struct CGImage *)arg1 quality:(id)arg2;

@end
