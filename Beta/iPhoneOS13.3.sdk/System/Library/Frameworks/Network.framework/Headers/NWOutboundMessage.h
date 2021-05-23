/*
 Image: /System/Library/Frameworks/Network.framework/Network
 */

#import <Network/NWMessage.h>

@interface NWOutboundMessage : NWMessage

@property (nonatomic) double relativePriority;
@property (nonatomic) unsigned long long expirationMilliseconds;

- (id)initWithContent:(id)arg1;
- (void)addAntecedent:(id)arg1;

@end
