/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSString;

@interface PMRSplitTime : NSObject

{
    unsigned long long _splitTime;
    NSString *_key;
    NSString *_comment;
    NSMutableArray *_splitTimes;
    long long _level;
    unsigned long long _duration;
}

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *comment;
@property (nonatomic) long long level;
@property (nonatomic) unsigned long long splitTime;
@property (nonatomic) unsigned long long duration;
@property (copy, nonatomic) NSArray *splitTimes;

- (void)dealloc;
- (id)description;
- (id)initWithKey:(id)arg1 comment:(id)arg2 level:(long long)arg3;
- (id)initWithKey:(id)arg1 comment:(id)arg2 level:(long long)arg3 duration:(unsigned long long)arg4;
- (id)_subtreeDescription;
- (id)dumpTraceLog;
- (void)addSplitTimesObject:(id)arg1;
- (void)removeSplitTimesObject:(id)arg1;

@end
