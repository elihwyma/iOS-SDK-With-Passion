//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WatchListKit/WLKRequest.h>

@class NSString;

@interface WLKCanonicalContainerRequest : WLKRequest
{
    NSString *_canonicalID;
}

@property(readonly, copy, nonatomic) NSString *canonicalID; // @synthesize canonicalID=_canonicalID;
// - (void).cxx_destruct;
- (void)makeRequestWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (id)initWithCanonicalID:(id)arg1;

@end
