/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <MapsSupport/Swift-Protocol.h>

@class NSString;

@protocol SYChange <Swift>

@property (nonatomic, readonly) NSString *objectIdentifier;
@property (nonatomic, readonly) NSString *sequencer;
@property (nonatomic, readonly) long long changeType;

@end
