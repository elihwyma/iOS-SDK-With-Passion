/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface VEKProgress : NSObject

{
    float _percent;
    NSString *_taskDescription;
}

@property float percent;
@property (copy) NSString *taskDescription;

@end
