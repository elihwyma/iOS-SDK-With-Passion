/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPassImageSet.h>

@class PKImage;

@interface PKPassPlaceHolderImageSet : PKPassImageSet

{
    PKImage *_placeHolderImage;
    struct CGRect _logoRect;
}

@property (retain, nonatomic) PKImage *placeHolderImage;
@property (nonatomic) struct CGRect logoRect;

+ (_Bool)supportsSecureCoding;
+ (unsigned int)currentVersion;
+ (long long)imageSetType;
+ (id)archiveName;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_initWithDisplayProfile:(id)arg1 fileURL:(id)arg2 screenScale:(double)arg3 suffix:(id)arg4 frontFaceImageSet:(id)arg5;
- (id)initWithDisplayProfile:(id)arg1 fileURL:(id)arg2 screenScale:(double)arg3 suffix:(id)arg4;
- (void)preheatImages;

@end
