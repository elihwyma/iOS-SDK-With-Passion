/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class NSMapTable;

@interface BWInferenceSchedulerJobList : NSObject

{
    unsigned long long _jobCount;
    unsigned long long _mutations;
    CDStruct_cc69c771 *_orderedJobs;
    NSMapTable *_jobIndexByProvider;
}

@property (readonly) unsigned long long count;

- (void)dealloc;
- (id)initWithCapacity:(unsigned long long)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (CDStruct_cc69c771 *)jobAtIndex:(unsigned long long)arg1;

@end
