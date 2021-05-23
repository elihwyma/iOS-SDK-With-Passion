/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <IDSFoundation/Swift-Protocol.h>

@class NSString;

@protocol IDSLinkDelegate;

@protocol IDSLink <Swift>

@property (retain) NSString *cbuuid;
@property (retain) NSString *deviceUniqueID;
@property (readonly, getter=linkTypeString) NSString *linkTypeString;
@property (readonly) unsigned long long state;
@property (readonly) unsigned long long headerOverhead;
@property (weak) id <IDSLinkDelegate> delegate;
@property (weak) id <IDSLinkDelegate> alternateDelegate;

- (unsigned short)sendPacketBufferArray:arraySize:toDeviceUniqueID:cbuuid: /* Error: Ran out of types for this method. */;
- (unsigned short)sendPacketBuffer:toDeviceUniqueID:cbuuid: /* Error: Ran out of types for this method. */;
- (unsigned short)generateLinkReport:isCurrentLink: /* Error: Ran out of types for this method. */;
- (unsigned short)copyLinkStatsDict;

@end
