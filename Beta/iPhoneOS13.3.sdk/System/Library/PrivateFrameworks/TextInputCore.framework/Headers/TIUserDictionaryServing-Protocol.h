/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <TextInputCore/Swift-Protocol.h>

@class NSUUID;

@protocol TIUserDictionaryServing <Swift>

@property (copy, nonatomic, readonly) NSUUID *userDictionaryUUID;

- (unsigned short)addObserver: /* Error: Ran out of types for this method. */;
- (unsigned short)removeObserver: /* Error: Ran out of types for this method. */;
- (unsigned short)startServer;
- (unsigned short)getPhraseShortcutPairs: /* Error: Ran out of types for this method. */;

@end
