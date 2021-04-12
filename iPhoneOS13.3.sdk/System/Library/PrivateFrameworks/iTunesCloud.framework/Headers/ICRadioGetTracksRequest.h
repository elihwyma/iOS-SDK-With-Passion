//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class ICRadioContentReference, ICRadioPlaybackHistory, ICStoreRequestContext, NSArray, NSDictionary, NSNumber, NSString, NSURL;

@interface ICRadioGetTracksRequest : NSObject <NSCopying>
{
    BOOL _allowsExplicitContent;
    BOOL _preservingCurrentlyPlayingItem;
    BOOL _shouldResponseContainStationMetadata;
    NSDictionary *_additionalRequestParameters;
    NSArray *_playActivityEvents;
    ICRadioPlaybackHistory *_playbackContext;
    NSNumber *_privateListeningEnabled;
    NSNumber *_delegatedPrivateListeningEnabled;
    long long _reasonType;
    ICStoreRequestContext *_requestContext;
    NSString *_stationHash;
    long long _stationID;
    NSString *_stationStringID;
    NSURL *_stationURL;
    ICRadioContentReference *_seedContentReference;
    ICRadioContentReference *_nowPlayingContentReference;
}

@property(copy, nonatomic) ICRadioContentReference *nowPlayingContentReference; // @synthesize nowPlayingContentReference=_nowPlayingContentReference;
@property(copy, nonatomic) ICRadioContentReference *seedContentReference; // @synthesize seedContentReference=_seedContentReference;
@property(copy, nonatomic) NSURL *stationURL; // @synthesize stationURL=_stationURL;
@property(copy, nonatomic) NSString *stationStringID; // @synthesize stationStringID=_stationStringID;
@property(nonatomic) long long stationID; // @synthesize stationID=_stationID;
@property(copy, nonatomic) NSString *stationHash; // @synthesize stationHash=_stationHash;
@property(nonatomic) BOOL shouldResponseContainStationMetadata; // @synthesize shouldResponseContainStationMetadata=_shouldResponseContainStationMetadata;
@property(copy, nonatomic) ICStoreRequestContext *requestContext; // @synthesize requestContext=_requestContext;
@property(nonatomic) long long reasonType; // @synthesize reasonType=_reasonType;
@property(copy, nonatomic, getter=isDelegatedPrivateListeningEnabled) NSNumber *delegatedPrivateListeningEnabled; // @synthesize delegatedPrivateListeningEnabled=_delegatedPrivateListeningEnabled;
@property(copy, nonatomic, getter=isPrivateListeningEnabled) NSNumber *privateListeningEnabled; // @synthesize privateListeningEnabled=_privateListeningEnabled;
@property(nonatomic, getter=isPreservingCurrentlyPlayingItem) BOOL preservingCurrentlyPlayingItem; // @synthesize preservingCurrentlyPlayingItem=_preservingCurrentlyPlayingItem;
@property(copy, nonatomic) ICRadioPlaybackHistory *playbackContext; // @synthesize playbackContext=_playbackContext;
@property(copy, nonatomic) NSArray *playActivityEvents; // @synthesize playActivityEvents=_playActivityEvents;
@property(nonatomic) BOOL allowsExplicitContent; // @synthesize allowsExplicitContent=_allowsExplicitContent;
@property(copy, nonatomic) NSDictionary *additionalRequestParameters; // @synthesize additionalRequestParameters=_additionalRequestParameters;
// - (void).cxx_destruct;
- (void)performWithResponseHandler:(id /* CDUnknownBlockType */)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)init;

@end

