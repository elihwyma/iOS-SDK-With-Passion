/*
 Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

#import <WatchListKit/WLKRequest.h>

@class NSString;

@interface WLKCanonicalPlayablesRequest : WLKRequest

{
    NSString *_canonicalID;
    NSString *_statsID;
}

@property (copy, nonatomic, readonly) NSString *canonicalID;
@property (copy, nonatomic, readonly) NSString *statsID;

- (id)initWithCanonicalID:(id)arg1;
- (void)makeRequestWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithStatsID:(id)arg1;

@end
