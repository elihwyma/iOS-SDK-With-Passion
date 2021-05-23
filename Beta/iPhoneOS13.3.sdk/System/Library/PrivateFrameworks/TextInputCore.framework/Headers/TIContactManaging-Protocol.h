/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <TextInputCore/Swift-Protocol.h>

@class NSUUID;

@protocol TIContactManaging <Swift>

@property (copy, nonatomic, readonly) NSUUID *contactCollectionUUID;

- (unsigned short)unload;
- (unsigned short)addContactObserver: /* Error: Ran out of types for this method. */;
- (unsigned short)removeContactObserver: /* Error: Ran out of types for this method. */;
- (unsigned short)getOnce: /* Error: Ran out of types for this method. */;

@end
