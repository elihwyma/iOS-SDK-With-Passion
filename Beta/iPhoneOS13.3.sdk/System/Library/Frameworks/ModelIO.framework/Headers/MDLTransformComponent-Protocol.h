/*
 Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

#import <ModelIO/Swift-Protocol.h>

@class NSArray;

@protocol MDLTransformComponent <Swift>

@property (nonatomic) CDStruct_14d5dc5e matrix;
@property (nonatomic) _Bool resetsTransform;
@property (nonatomic, readonly) double minimumTime;
@property (nonatomic, readonly) double maximumTime;
@property (copy, nonatomic, readonly) NSArray *keyTimes;

+ (unsigned short)globalTransformWithObject:atTime: /* Error: Ran out of types for this method. */;

- (unsigned short)localTransformAtTime: /* Error: Ran out of types for this method. */;
- (unsigned short)setLocalTransform: /* Error: Ran out of types for this method. */;
- (unsigned short)setLocalTransform:forTime: /* Error: Ran out of types for this method. */;

@end
