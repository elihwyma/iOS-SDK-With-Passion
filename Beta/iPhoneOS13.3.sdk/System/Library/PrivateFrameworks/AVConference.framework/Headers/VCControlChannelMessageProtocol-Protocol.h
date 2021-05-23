/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <AVConference/Swift-Protocol.h>

@class NSData, NSString;

@protocol VCControlChannelMessageProtocol <Swift>

@property (readonly) unsigned long long VCCCLength;
@property (readonly) NSString *VCCCString;
@property (readonly) NSData *VCCCData;
@property (readonly) NSString *VCCCPayloadKey;

- (unsigned short)VCCCGetBytes:size: /* Error: Ran out of types for this method. */;

@end
