/*
 Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface PHAJobWorkInfoReader : NSObject

{
    NSMutableArray *_workInfosQueue;
    unsigned long long _fetchLimit;
}

@property (nonatomic) unsigned long long fetchLimit;
@property (nonatomic, readonly) unsigned long long queueCount;

- (id)init;
- (id)workInfoWithCount:(unsigned long long)arg1 fetchBlock:(CDUnknownBlockType)arg2;

@end
