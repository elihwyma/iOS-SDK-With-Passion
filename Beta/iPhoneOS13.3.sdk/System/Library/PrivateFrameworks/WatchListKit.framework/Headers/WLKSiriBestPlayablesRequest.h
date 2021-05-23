/*
 Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

#import <WatchListKit/WLKRequest.h>

@class NSArray;

@interface WLKSiriBestPlayablesRequest : WLKRequest

{
    NSArray *_statsIDs;
}

@property (copy, nonatomic, readonly) NSArray *statsIDs;

- (id)init;
- (void)makeRequestWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithStatsIDs:(id)arg1;

@end
