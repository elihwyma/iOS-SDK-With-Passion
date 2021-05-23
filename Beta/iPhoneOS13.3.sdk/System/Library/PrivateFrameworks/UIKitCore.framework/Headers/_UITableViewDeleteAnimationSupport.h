/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface _UITableViewDeleteAnimationSupport : NSObject

{
    NSMutableArray *_cellsToDeleteAfterAnimation;
    int _deleteCount;
    unsigned int _enabledStateBeforeDeleteAnimation:1;
    unsigned int _reserved:30;
}

@end
