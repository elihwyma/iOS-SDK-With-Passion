/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <IDSFoundation/IDSSocketPairMessage.h>

@class NSData;

@interface IDSSocketPairEncryptedMessage : IDSSocketPairMessage

{
    NSData *_data;
}

@property (nonatomic, readonly) NSData *data;

- (id)initWithData:(id)arg1;
- (unsigned char)command;
- (id)initWithCommand:(unsigned char)arg1 underlyingData:(id)arg2;
- (id)_nonHeaderData;

@end
