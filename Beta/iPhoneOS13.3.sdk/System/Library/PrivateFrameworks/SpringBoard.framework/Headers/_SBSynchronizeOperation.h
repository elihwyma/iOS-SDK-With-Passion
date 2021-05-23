/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSOperation.h>

@class NSMutableArray, NSObject, NSString;

@protocol OS_dispatch_group;

@interface _SBSynchronizeOperation : NSOperation

{
    NSString *_humanReadableDescription;
    NSObject<OS_dispatch_group> *_operationGroup;
    NSMutableArray *_tasks;
}

@property (retain, nonatomic) NSString *humanReadableDescription;

- (id)init;
- (void)main;
- (void)addTask:(CDUnknownBlockType)arg1;

@end
