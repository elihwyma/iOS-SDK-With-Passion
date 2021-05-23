/*
 Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

#import <StoreBookkeeper/Swift-Protocol.h>

@protocol SBKKeyValuePayloadPair <Swift>

+ (unsigned short)pairWithKVSKey:kvsPayload: /* Error: Ran out of types for this method. */;

- (unsigned short)timestamp;
- (unsigned short)kvsKey;
- (unsigned short)kvsPayload;
- (unsigned short)kvsValueDescription;

@end
