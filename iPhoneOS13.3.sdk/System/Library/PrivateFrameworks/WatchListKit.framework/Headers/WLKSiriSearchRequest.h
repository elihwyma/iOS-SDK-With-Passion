//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WatchListKit/WLKRequest.h>

@class NSDictionary;

@interface WLKSiriSearchRequest : WLKRequest
{
    NSDictionary *_query;
}

@property(readonly, copy, nonatomic) NSDictionary *query; // @synthesize query=_query;
// - (void).cxx_destruct;
- (void)makeRequestWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (id)initWithQuery:(id)arg1;

@end

