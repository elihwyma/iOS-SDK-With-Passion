/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <ARKit/Swift-Protocol.h>

@class NSDictionary, NSMutableDictionary;

@protocol MTLCommandBufferSPI <Swift>

@property (nonatomic, getter=getListIndex) unsigned long long listIndex;
@property (getter=isProfilingEnabled) _Bool profilingEnabled;
@property (readonly) NSDictionary *profilingResults;
@property (nonatomic, readonly) NSMutableDictionary *userDictionary;
@property (readonly) unsigned long long globalTraceObjectID;

- (unsigned short)addPurgedResource: /* Error: Ran out of types for this method. */;
- (unsigned short)addPurgedHeap: /* Error: Ran out of types for this method. */;

@end
