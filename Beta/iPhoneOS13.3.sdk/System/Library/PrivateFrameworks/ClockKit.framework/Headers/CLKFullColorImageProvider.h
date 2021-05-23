/*
 Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
 */

#import <Foundation/NSObject.h>

@class CLKImageProvider, NSDictionary, NSString, UIColor, UIImage;

@interface CLKFullColorImageProvider : NSObject

{
    UIColor *_tintColor;
    _Bool _applyScalingAndCircularMasking;
    _Bool _finalized;
    _Bool _prefersFilterOverTransition;
    _Bool _tritium_inactiveFullColorImageProvider;
    UIImage *_image;
    CLKImageProvider *_tintedImageProvider;
    NSString *_accessibilityLabel;
    Class _ImageViewClass;
    NSDictionary *_metadata;
    long long _monochromeFilterType;
}

@property (nonatomic) _Bool prefersFilterOverTransition;
@property (nonatomic, readonly) Class ImageViewClass;
@property (nonatomic, readonly, getter=tritium_isTritiumInactiveFullColorImageProvider) _Bool tritium_inactiveFullColorImageProvider;
@property (copy, nonatomic) NSDictionary *metadata;
@property (retain, nonatomic) UIColor *tintColor;
@property (nonatomic) long long monochromeFilterType;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) CLKImageProvider *tintedImageProvider;
@property (retain, nonatomic) NSString *accessibilityLabel;

+ (_Bool)supportsSecureCoding;
+ (id)providerWithFullColorImage:(id)arg1 monochromeFilterType:(long long)arg2 applyScalingAndCircularMasking:(_Bool)arg3;
+ (id)providerWithFullColorImage:(id)arg1 tintedImageProvider:(id)arg2 applyScalingAndCircularMasking:(_Bool)arg3;
+ (id)providerWithFullColorImage:(id)arg1;
+ (id)providerWithFullColorImage:(id)arg1 monochromeFilterType:(long long)arg2;
+ (id)providerWithFullColorImage:(id)arg1 tintedImageProvider:(id)arg2;
+ (id)providerWithFullColorImage:(id)arg1 applyScalingAndCircularMasking:(_Bool)arg2;
+ (id)fullColorImageProviderWithImageViewClass:(Class)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)validate;
- (void)finalizeWithMaxSize:(struct CGSize)arg1 cornerRadius:(double)arg2;
- (id)initWithJSONObjectRepresentation:(id)arg1 bundle:(id)arg2;
- (id)JSONObjectRepresentationWritingResourcesToBundlePath:(id)arg1;
- (void)_resizeImagesIfNecessaryWithMaxSize:(struct CGSize)arg1 cornerRadius:(double)arg2;

@end
