/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <Foundation/NSObject.h>

@class ENGroupID, IDSDestinationPushToken, NSData, NSDictionary, NSString;

@interface IDSCloudKitTransportLogMessage : NSObject

{
    NSDictionary *_payload;
    NSString *_secondaryID;
    NSString *_deviceID;
    NSString *_encryptionType;
}

@property (retain, nonatomic) NSDictionary *payload;
@property (retain, nonatomic) NSString *secondaryID;
@property (retain, nonatomic) NSString *deviceID;
@property (retain, nonatomic) NSString *encryptionType;
@property (nonatomic, readonly) ENGroupID *groupID;
@property (nonatomic, readonly) NSString *recipientAlias;
@property (nonatomic, readonly) NSString *senderAlias;
@property (nonatomic, readonly) IDSDestinationPushToken *destination;
@property (nonatomic, readonly) NSData *encryptedPayload;
@property (nonatomic, readonly) NSString *cypherIdentifier;

@end
