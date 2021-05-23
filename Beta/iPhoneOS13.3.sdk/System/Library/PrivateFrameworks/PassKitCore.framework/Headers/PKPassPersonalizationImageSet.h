/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPassImageSet.h>

@class PKImage;

@interface PKPassPersonalizationImageSet : PKPassImageSet

{
    PKImage *_logoImage;
}

@property (retain, nonatomic) PKImage *logoImage;

+ (_Bool)supportsSecureCoding;
+ (_Bool)shouldCache;
+ (long long)imageSetType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDisplayProfile:(id)arg1 fileURL:(id)arg2 screenScale:(double)arg3 suffix:(id)arg4;
- (void)preheatImages;

@end
