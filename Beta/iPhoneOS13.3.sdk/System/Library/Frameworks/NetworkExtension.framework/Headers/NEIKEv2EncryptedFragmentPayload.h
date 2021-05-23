/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <NetworkExtension/NEIKEv2EncryptedPayload.h>

@interface NEIKEv2EncryptedFragmentPayload : NEIKEv2EncryptedPayload

{
    unsigned int _fragmentNumber;
    unsigned int _totalFragments;
    unsigned long long _nextPayload;
}

@property unsigned int fragmentNumber;
@property unsigned int totalFragments;
@property unsigned long long nextPayload;

+ (id)copyTypeDescription;

- (unsigned long long)type;
- (_Bool)hasRequiredFields;
- (_Bool)parsePayloadData;

@end
