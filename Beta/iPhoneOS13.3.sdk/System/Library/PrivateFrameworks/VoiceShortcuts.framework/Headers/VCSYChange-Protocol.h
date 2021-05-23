/*
 Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
 */

#import <VoiceShortcuts/Swift-Protocol.h>

@class NSString;

@protocol VCSYChange <Swift>

@property (nonatomic, readonly) NSString *objectIdentifier;
@property (nonatomic, readonly) long long changeType;

- (unsigned short)initWithObjectIdentifier:changeType: /* Error: Ran out of types for this method. */;

@end
