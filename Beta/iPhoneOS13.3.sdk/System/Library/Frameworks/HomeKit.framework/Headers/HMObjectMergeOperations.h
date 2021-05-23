/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface HMObjectMergeOperations : NSObject

{
    NSMutableArray *_operations;
}

@property (retain, nonatomic) NSMutableArray *operations;

- (id)init;
- (void)_addOperation:(id)arg1;
- (void)_executeOperationsOnQueue:(id)arg1;

@end
