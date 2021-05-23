/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPassImageSet.h>

@class PKImage;

@interface PKPassFrontFaceImageSet : PKPassImageSet

{
    PKImage *_faceImage;
    PKImage *_faceShadowImage;
    struct CGRect _logoRect;
    struct CGRect _thumbnailRect;
    struct CGRect _stripRect;
}

@property (retain, nonatomic) PKImage *faceImage;
@property (retain, nonatomic) PKImage *faceShadowImage;
@property (nonatomic) struct CGRect logoRect;
@property (nonatomic) struct CGRect thumbnailRect;
@property (nonatomic) struct CGRect stripRect;

+ (_Bool)supportsSecureCoding;
+ (unsigned int)currentVersion;
+ (long long)imageSetType;
+ (id)archiveName;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDisplayProfile:(id)arg1 fileURL:(id)arg2 screenScale:(double)arg3 suffix:(id)arg4;
- (void)preheatImages;

@end
