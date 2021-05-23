/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/Swift-Protocol.h>

@protocol SXLayoutPipelineDelegate;

@protocol SXLayoutPipeline <Swift>

@property (weak, nonatomic) id <SXLayoutPipelineDelegate> delegate;

- (unsigned short)layoutWithTask: /* Error: Ran out of types for this method. */;
- (unsigned short)addProcessor:type: /* Error: Ran out of types for this method. */;
- (unsigned short)removeProcessor:type: /* Error: Ran out of types for this method. */;
- (unsigned short)cancelTasks;

@end
