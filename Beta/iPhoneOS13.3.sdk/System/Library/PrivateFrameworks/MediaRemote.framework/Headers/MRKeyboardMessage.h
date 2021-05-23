/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <MediaRemote/MRProtocolMessage.h>

@class MRTextEditingAttributes, NSData;

@interface MRKeyboardMessage : MRProtocolMessage

{
    MRTextEditingAttributes *_attributes;
}

@property (nonatomic, readonly) unsigned long long state;
@property (nonatomic, readonly) NSData *encryptedTextCyphertext;
@property (nonatomic, readonly) MRTextEditingAttributes *attributes;

+ (id)encryptedMessageWithState:(unsigned long long)arg1 text:(id)arg2 attributes:(id)arg3 usingCryptoSession:(id)arg4;

- (unsigned long long)type;
- (id)decryptedTextUsingCryptoSession:(id)arg1;
- (id)initWithState:(unsigned long long)arg1 encryptedTextCyphertext:(id)arg2 attributes:(id)arg3;

@end
