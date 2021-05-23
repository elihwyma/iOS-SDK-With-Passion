/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSData.h>

@class NSString;

@interface NSData (VCControlChannelMessageProtocol)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) unsigned long long VCCCLength;
@property (readonly) NSString *VCCCString;
@property (readonly) NSData *VCCCData;
@property (readonly) NSString *VCCCPayloadKey;

- (_Bool)VCCCGetBytes:(char *)arg1 size:(unsigned int)arg2;

@end
