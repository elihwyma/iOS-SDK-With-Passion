/*
 Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

#import <CompanionSync/Swift-Protocol.h>

@class NSString;

@protocol SYChange <Swift>

@property (nonatomic, readonly) NSString *objectIdentifier;
@property (nonatomic, readonly) NSString *sequencer;
@property (nonatomic, readonly) long long changeType;

@end
