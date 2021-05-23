/*
 Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

#import <Foundation/NSObject.h>

#import <IMSharedUtilities/Swift-Protocol.h>

@class IMNicknameAvatarImage, NSString;

@interface IMNickname : NSObject <Swift>

{
    NSString *_firstName;
    NSString *_lastName;
    IMNicknameAvatarImage *_avatar;
    NSString *_displayName;
    NSString *_handle;
    NSString *_recordID;
}

@property (copy, nonatomic) NSString *firstName;
@property (copy, nonatomic) NSString *lastName;
@property (retain, nonatomic) IMNicknameAvatarImage *avatar;
@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSString *handle;
@property (retain, nonatomic) NSString *recordID;
@property (nonatomic, readonly) NSString *nameHash;
@property (nonatomic, readonly) NSString *imageHash;

+ (_Bool)supportsSecureCoding;
+ (id)uniqueFilePathForWritingImageData;
+ (id)nameHashWithFirstName:(id)arg1 lastName:(id)arg2;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (id)dataRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithFirstName:(id)arg1 lastName:(id)arg2 avatar:(id)arg3;
- (id)publicDictionaryRepresentation;
- (id)_imageHashCreatedInChunks;
- (id)initWithMeContact:(id)arg1;
- (id)initWithPublicDictionaryRepresentationWithoutAvatar:(id)arg1;
- (id)publicDictionaryRepresentationWithoutAvatar;
- (id)_sharingState;
- (_Bool)isUpdateFromNickname:(id)arg1 withOptions:(unsigned long long)arg2;
- (void)updateNameFromContact:(id)arg1;

@end
