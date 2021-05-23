/*
 Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

#import <Foundation/NSObject.h>

@interface AXMTask : NSObject

{
    _Bool _complete;
    CDUnknownBlockType _taskCompleteBlock;
}

@property (nonatomic, getter=isComplete) _Bool complete;
@property (copy, nonatomic) CDUnknownBlockType taskCompleteBlock;

- (void)markAsComplete:(_Bool)arg1;

@end
