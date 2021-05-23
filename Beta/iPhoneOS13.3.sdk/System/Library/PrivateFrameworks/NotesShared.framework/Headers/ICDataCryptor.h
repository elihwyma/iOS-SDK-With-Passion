/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <Foundation/NSObject.h>

@class NSData, NSMutableDictionary, NSString;

@interface ICDataCryptor : NSObject

{
    NSMutableDictionary *_tagDictionary;
    NSString *_cloudSyncingObjectIdentifier;
    NSMutableDictionary *_initializationVectorDictionary;
}

@property (retain, nonatomic) NSMutableDictionary *tagDictionary;
@property (retain, nonatomic) NSString *cloudSyncingObjectIdentifier;
@property (retain, nonatomic) NSMutableDictionary *initializationVectorDictionary;
@property (nonatomic, readonly) NSData *unwrappedKey;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCloudSyncingObjectIdentifier:(id)arg1;
- (id)encryptData:(id)arg1 identifier:(id)arg2;
- (id)decryptEncryptedData:(id)arg1 identifier:(id)arg2;

@end
