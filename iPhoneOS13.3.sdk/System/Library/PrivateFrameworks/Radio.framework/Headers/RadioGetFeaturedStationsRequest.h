//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Radio/RadioRequest.h>

@class NSObject, SSURLConnectionRequest;
@protocol OS_dispatch_queue;

@interface RadioGetFeaturedStationsRequest : RadioRequest
{
    NSObject<OS_dispatch_queue> *_artworkQueue;
    SSURLConnectionRequest *_request;
    unsigned int _stationCount;
    BOOL _disableArtworkLoading;
    BOOL _disableCachedResponses;
}

@property(nonatomic) BOOL disableCachedResponses; // @synthesize disableCachedResponses=_disableCachedResponses;
@property(nonatomic) BOOL disableArtworkLoading; // @synthesize disableArtworkLoading=_disableArtworkLoading;
// - (void).cxx_destruct;
- (id)_stationDictionariesByApplyingResponse:(id)arg1 error:(id )arg2;
- (id)_importFeaturedStationWithDictionary:(id)arg1 inModel:(id)arg2 loadArtworkSynchronously:(BOOL)arg3;
- (void)startWithFeaturedStationsCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (void)startWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (void)cancel;
- (id)initWithStationCount:(unsigned int)arg1;
- (id)init;

@end

