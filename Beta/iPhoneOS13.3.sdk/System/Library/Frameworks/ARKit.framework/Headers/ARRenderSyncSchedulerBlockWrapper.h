/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

@class NSDate;

@interface ARRenderSyncSchedulerBlockWrapper : NSObject

{
    NSDate *_entryTimestamp;
    CDUnknownBlockType _block;
}

@property (retain, nonatomic) NSDate *entryTimestamp;
@property (copy, nonatomic) CDUnknownBlockType block;

@end
