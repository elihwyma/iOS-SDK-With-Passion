/*
 Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

#import <FrontBoard/Swift-Protocol.h>

@protocol FBApplicationDataStoreRepositoryReadingDelegate;

@protocol FBApplicationDataStoreRepositoryReading <Swift>

@property (weak, nonatomic) id <FBApplicationDataStoreRepositoryReadingDelegate> delegate;

- (unsigned short)close;
- (unsigned short)objectForKey:forApplication: /* Error: Ran out of types for this method. */;
- (unsigned short)allObjectsForKeys: /* Error: Ran out of types for this method. */;
- (unsigned short)applicationIdentifiersWithState;
- (unsigned short)keysForApplication: /* Error: Ran out of types for this method. */;
- (unsigned short)containsKey:forApplication: /* Error: Ran out of types for this method. */;

@end
