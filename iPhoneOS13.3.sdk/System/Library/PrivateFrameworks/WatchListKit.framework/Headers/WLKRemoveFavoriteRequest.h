//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

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

@property(readonly, nonatomic) WLKWatchListModificationResponse *response; // @synthesize response=_response;
@property(readonly, copy, nonatomic) NSString *externalID; // @synthesize externalID=_externalID;
@property(readonly, copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(readonly, copy, nonatomic) NSString *statsID; // @synthesize statsID=_statsID;
@property(readonly, copy, nonatomic) NSString *canonicalID; // @synthesize canonicalID=_canonicalID;
// - (void).cxx_destruct;
- (void)makeRequestWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (id)initWithBundleID:(id)arg1 externalID:(id)arg2;
- (id)initWithStatsID:(id)arg1;
- (id)initWithCanonicalID:(id)arg1;

@end
