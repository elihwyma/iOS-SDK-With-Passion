/*
 Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSSet, NSString;

@interface SFAirDropTransferMetaData : NSObject

{
    _Bool _canAutoAccept;
    _Bool _didAutoAccept;
    _Bool _verifiableIdentity;
    _Bool _senderIsMe;
    long long _transferTypes;
    NSString *_contactIdentifier;
    NSString *_senderBundleID;
    NSString *_senderComputerName;
    NSString *_senderEmail;
    NSString *_senderEmailHash;
    NSString *_senderCompositeName;
    NSString *_senderFirstName;
    NSString *_senderLastName;
    NSString *_senderID;
    id _senderIcon;
    id _smallPreviewImage;
    id _previewImage;
    NSString *_itemsDescription;
    NSDictionary *_itemsDescriptionAdvanced;
    NSSet *_items;
    NSArray *_rawFiles;
}

@property (nonatomic) long long transferTypes;
@property (copy, nonatomic) NSSet *items;
@property (nonatomic) _Bool didAutoAccept;
@property (nonatomic, readonly) _Bool canAutoAccept;
@property (nonatomic, readonly, getter=isVerifiableIdentity) _Bool verifiableIdentity;
@property (nonatomic, readonly) _Bool senderIsMe;
@property (copy, nonatomic, readonly) NSString *contactIdentifier;
@property (copy, nonatomic, readonly) NSString *senderBundleID;
@property (copy, nonatomic, readonly) NSString *senderComputerName;
@property (copy, nonatomic, readonly) NSString *senderEmail;
@property (copy, nonatomic, readonly) NSString *senderEmailHash;
@property (copy, nonatomic, readonly) NSString *senderCompositeName;
@property (copy, nonatomic, readonly) NSString *senderFirstName;
@property (copy, nonatomic, readonly) NSString *senderLastName;
@property (copy, nonatomic, readonly) NSString *senderID;
@property (nonatomic, readonly) id senderIcon;
@property (nonatomic, readonly) id smallPreviewImage;
@property (nonatomic, readonly) id previewImage;
@property (copy, nonatomic, readonly) NSString *itemsDescription;
@property (copy, nonatomic, readonly) NSDictionary *itemsDescriptionAdvanced;
@property (copy, nonatomic, readonly) NSArray *rawFiles;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInformation:(id)arg1;
- (void)updateUsingCoder:(id)arg1;
- (void)setItemsDescription:(id)arg1;

@end
