/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <IDSFoundation/IDSSocketPairMessage.h>

@interface IDSSocketPairHandshake : IDSSocketPairMessage

{
    unsigned int _versionNumber;
}

@property (nonatomic, readonly) unsigned int versionNumber;

- (unsigned char)command;
- (id)initWithCommand:(unsigned char)arg1 underlyingData:(id)arg2;
- (id)_nonHeaderData;
- (id)initWithVersionNumber:(unsigned int)arg1;

@end
