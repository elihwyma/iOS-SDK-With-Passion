/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Memories/Swift-Protocol.h>

@class MiroAutoEditController, MiroMemory, Project;

@protocol PMDebugCollectionViewControllerProtocol <Swift>

@property (nonatomic, readonly) MiroMemory *memory;
@property (nonatomic, readonly) MiroAutoEditController *autoEditController;
@property (nonatomic, readonly) Project *project;

@end
