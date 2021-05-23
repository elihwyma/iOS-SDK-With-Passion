/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <CoreSpeech/Swift-Protocol.h>

@protocol NviSignalProvider <Swift>

@property (nonatomic, readonly) unsigned long long sigType;

- (unsigned short)reset;
- (unsigned short)addDelegate: /* Error: Ran out of types for this method. */;
- (unsigned short)removeDelegate: /* Error: Ran out of types for this method. */;
- (unsigned short)initWithDataSource:assetsProvider: /* Error: Ran out of types for this method. */;
- (unsigned short)startWithNviContext:didStartHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)stopWithDidStopHandler: /* Error: Ran out of types for this method. */;

@end
