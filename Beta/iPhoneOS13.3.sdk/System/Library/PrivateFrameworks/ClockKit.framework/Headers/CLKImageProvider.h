/*
 Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
 */

#import <Foundation/NSObject.h>

@class NSString, UIColor, UIImage;

@interface CLKImageProvider : NSObject

{
    _Bool _finalized;
    _Bool _foregroundAccentImageTinted;
    UIImage *_onePieceImage;
    UIColor *_tintColor;
    UIImage *_twoPieceImageBackground;
    UIImage *_twoPieceImageForeground;
    NSString *_accessibilityLabel;
    CDUnknownBlockType _imageViewCreationHandler;
    UIImage *_foregroundAccentImage;
    UIColor *_foregroundAccentImageColor;
    struct CGSize _maxSize;
}

@property (copy, nonatomic) CDUnknownBlockType imageViewCreationHandler;
@property (nonatomic, readonly) struct CGSize maxSize;
@property (retain, nonatomic) UIImage *foregroundAccentImage;
@property (retain, nonatomic) UIColor *foregroundAccentImageColor;
@property (nonatomic, getter=isForegroundAccentImageTinted) _Bool foregroundAccentImageTinted;
@property (retain, nonatomic) UIImage *onePieceImage;
@property (retain, nonatomic) UIColor *tintColor;
@property (retain, nonatomic) UIImage *twoPieceImageBackground;
@property (retain, nonatomic) UIImage *twoPieceImageForeground;
@property (retain, nonatomic) NSString *accessibilityLabel;

+ (_Bool)supportsSecureCoding;
+ (id)imageProviderWithOnePieceImage:(id)arg1 twoPieceImageBackground:(id)arg2 twoPieceImageForeground:(id)arg3;
+ (id)imageProviderWithOnePieceImage:(id)arg1;
+ (id)imageProviderWithImageViewCreationHandler:(CDUnknownBlockType)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)validate;
- (void)finalizeWithMaxSize:(struct CGSize)arg1 maskToCircle:(_Bool)arg2;
- (void)finalizeWithMaxSize:(struct CGSize)arg1 cornerRadius:(double)arg2;
- (id)initWithJSONObjectRepresentation:(id)arg1 bundle:(id)arg2;
- (id)JSONObjectRepresentationWritingResourcesToBundlePath:(id)arg1;
- (void)_resizeImagesIfNecessaryAndMaskToCircle:(_Bool)arg1;
- (void)_resizeImagesIfNecessaryWithCornerRadius:(double)arg1;

@end
