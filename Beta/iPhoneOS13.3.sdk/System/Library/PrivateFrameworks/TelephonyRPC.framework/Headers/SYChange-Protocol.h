/*
 Image: /System/Library/PrivateFrameworks/TelephonyRPC.framework/TelephonyRPC
 */

#import <TelephonyRPC/Swift-Protocol.h>

@class NSString;

@protocol SYChange <Swift>

@property (nonatomic, readonly) NSString *objectIdentifier;
@property (nonatomic, readonly) NSString *sequencer;
@property (nonatomic, readonly) long long changeType;

@end
