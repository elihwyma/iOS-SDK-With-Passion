/*
 Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

#import <CallKit/Swift-Protocol.h>

@class NSDictionary;

@protocol CXVoicemailObserverDataSource <Swift>

@property (copy, nonatomic, readonly) NSDictionary *voicemailUUIDToVoicemailMap;

- (unsigned short)invalidate;
- (unsigned short)addDelegate: /* Error: Ran out of types for this method. */;
- (unsigned short)removeDelegate: /* Error: Ran out of types for this method. */;
- (unsigned short)requestTransaction:completion: /* Error: Ran out of types for this method. */;

@end
