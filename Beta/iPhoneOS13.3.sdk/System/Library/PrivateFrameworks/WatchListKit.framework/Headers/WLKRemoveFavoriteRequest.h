/*
 Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

#import <WatchListKit/WLKRequest.h>

@class NSString, WLKWatchListModificationResponse;

@interface WLKRemoveFavoriteRequest : WLKRequest

{
    NSString *_channelID;
    NSString *_canonicalID;
    NSString *_statsID;
    NSString *_bundleID;
    NSString *_externalID;
    WLKWatchListModificationResponse *_response;
}

@property (copy, nonatomic, readonly) NSString *canonicalID;
@property (copy, nonatomic, readonly) NSString *statsID;
@property (copy, nonatomic, readonly) NSString *bundleID;
@property (copy, nonatomic, readonly) NSString *externalID;
@property (nonatomic, readonly) WLKWatchListModificationResponse *response;

- (id)initWithCanonicalID:(id)arg1;
- (void)makeRequestWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithStatsID:(id)arg1;
- (id)initWithBundleID:(id)arg1 externalID:(id)arg2;

@end
