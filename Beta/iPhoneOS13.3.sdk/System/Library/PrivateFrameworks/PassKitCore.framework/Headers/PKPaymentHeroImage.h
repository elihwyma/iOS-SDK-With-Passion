/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class NSArray, NSData, NSString, PKOSVersionRequirementRange, PKPaymentHeroImageSet;

@interface PKPaymentHeroImage : NSObject

{
    NSData *_imageData;
    PKPaymentHeroImageSet *_images;
    _Bool _isBeta;
    NSString *_identifier;
    PKOSVersionRequirementRange *_versionRequirement;
    NSArray *_requiredDeviceFeatures;
    long long _credentialType;
    long long _cardType;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) PKOSVersionRequirementRange *versionRequirement;
@property (nonatomic, readonly) NSArray *requiredDeviceFeatures;
@property (nonatomic, readonly) long long credentialType;
@property (nonatomic, readonly) long long cardType;
@property (nonatomic, readonly) _Bool isBeta;

- (id)initWithDictionary:(id)arg1;
- (id)imageForPreferredLanguages:(id)arg1 scale:(double)arg2;
- (id)imageFilePathOnDiskForPreferredLanguages:(id)arg1 scale:(double)arg2;
- (void)downloadImageForPreferredLanguages:(id)arg1 scale:(double)arg2 fileDownloader:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)imageFilePathForImageModel:(id)arg1;
- (id)initWithLegacyDictionary:(id)arg1 identifier:(id)arg2;
- (id)initWithIdentifier:(id)arg1 imageData:(id)arg2 credentialType:(long long)arg3;
- (_Bool)hasCachedImageWithScale:(double)arg1;
- (id)imageWithScale:(double)arg1;
- (void)downloadImageWithScale:(double)arg1 fileDownloader:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)isSupportedByDevice:(id)arg1;

@end
