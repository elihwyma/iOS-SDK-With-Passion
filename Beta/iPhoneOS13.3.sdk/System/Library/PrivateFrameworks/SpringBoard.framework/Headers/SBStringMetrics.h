/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface SBStringMetrics : NSObject

{
    NSMutableArray *_fragments;
}

- (id)init;
- (id)description;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (unsigned long long)fragmentCount;
- (id)fragments;
- (void)addFragment:(id)arg1;

@end
