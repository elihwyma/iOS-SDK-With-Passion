/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Memories/Swift-Protocol.h>

@class VEKProduction;

@protocol PMEditProviderDelegate;

@protocol PMEditProviderProtocol <Swift>

@property (retain, nonatomic) VEKProduction *production;
@property (weak, nonatomic) id <PMEditProviderDelegate> delegate;

- (unsigned short)initWithProduction: /* Error: Ran out of types for this method. */;

@end
