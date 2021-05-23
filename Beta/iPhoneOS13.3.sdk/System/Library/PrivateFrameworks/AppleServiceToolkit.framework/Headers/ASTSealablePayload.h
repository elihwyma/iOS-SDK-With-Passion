/*
 Image: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
 */

#import <Foundation/NSObject.h>

@class NSData, NSString;

@interface ASTSealablePayload : NSObject

{
    _Bool _sealed;
    NSData *_payload;
    NSString *_base64Signature;
    NSData *_signature;
}

@property (retain, nonatomic) NSData *payload;
@property (retain, nonatomic) NSString *base64Signature;
@property (retain, nonatomic) NSData *signature;
@property (nonatomic, getter=isSealed) _Bool sealed;

- (id)description;
- (id)initWithPayload:(id)arg1 signature:(id)arg2;
- (id)generatePayload;
- (_Bool)sealWithPayloadSigner:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (id)sealedDescription;

@end
