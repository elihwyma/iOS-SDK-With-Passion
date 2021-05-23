/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPassImageSet.h>

@class PKImage;

@interface PKPassLogoImageSet : PKPassImageSet

{
    PKImage *_logoImage;
    PKImage *_backgroundImage;
    PKImage *_thumbnailImage;
    PKImage *_stripImage;
    PKImage *_footerImage;
    PKImage *_bankLogoImage;
    PKImage *_networkLogoImage;
    PKImage *_cobrandLogoImage;
    PKImage *_cardBackgroundImage;
    PKImage *_cardBackgroundCombinedImage;
}

@property (retain, nonatomic) PKImage *logoImage;
@property (retain, nonatomic) PKImage *backgroundImage;
@property (retain, nonatomic) PKImage *thumbnailImage;
@property (retain, nonatomic) PKImage *stripImage;
@property (retain, nonatomic) PKImage *footerImage;
@property (retain, nonatomic) PKImage *bankLogoImage;
@property (retain, nonatomic) PKImage *networkLogoImage;
@property (retain, nonatomic) PKImage *cobrandLogoImage;
@property (retain, nonatomic) PKImage *cardBackgroundImage;
@property (retain, nonatomic) PKImage *cardBackgroundCombinedImage;

+ (_Bool)supportsSecureCoding;
+ (unsigned int)currentVersion;
+ (_Bool)shouldCache;
+ (long long)imageSetType;
+ (id)archiveName;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDisplayProfile:(id)arg1 fileURL:(id)arg2 screenScale:(double)arg3 suffix:(id)arg4;
- (void)preheatImages;

@end
