/*
 Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

#import <IMSharedUtilities/IMNicknameAvatar.h>

@class NSString;

@interface IMNicknameAvatarImage : IMNicknameAvatar

{
    NSString *_imageName;
    NSString *_imageFilePath;
}

@property (nonatomic, readonly) _Bool hasImage;
@property (copy, nonatomic) NSString *imageName;
@property (copy, nonatomic) NSString *imageFilePath;
@property (nonatomic, readonly) _Bool imageExists;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)imageData;
- (id)initWithImageName:(id)arg1 imageFilePath:(id)arg2;
- (id)publicDictionaryRepresentation;
- (id)initWithpublicDictionaryMetadataRepresentation:(id)arg1;
- (id)publicDictionaryMetadataRepresentation;
- (id)loadAndReturnImageData;

@end
