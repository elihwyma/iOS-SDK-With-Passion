/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCPVoteStats : NSObject

{
    long long _votes;
    long long _count;
}

@property (nonatomic) long long votes;
@property (nonatomic) long long count;

- (float)rate;
- (id)initWithVotes:(long long)arg1 andCount:(long long)arg2;

@end
