/*
 Image: /System/Library/PrivateFrameworks/MessageProtection.framework/MessageProtection
 */

#import <NSObject.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface NGMMessageSignatureFormatter : NSObject

{
    NSData *_formattedSignedData;
}

@property (nonatomic, readonly) NSData *formattedSignedData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)signedData;
- (id)initWithDHOutput:(id)arg1 prekeyPub:(id)arg2 ephemeralPub:(id)arg3 recipientPub:(id)arg4 ciphertext:(id)arg5;

@end
