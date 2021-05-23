/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Memories/Swift-Protocol.h>

@class MiroAutoEditLogger, MiroMemory, Project;

@protocol MiroAutoEditDelegate <Swift>

@property (nonatomic, readonly) Project *project;
@property (nonatomic, readonly) MiroMemory *activeMemory;
@property (nonatomic, readonly) MiroAutoEditLogger *logger;
@property (nonatomic, readonly) _Bool titleIsSupported;

@end
