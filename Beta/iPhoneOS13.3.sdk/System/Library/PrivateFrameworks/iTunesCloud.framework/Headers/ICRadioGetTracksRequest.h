/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

#import <iTunesCloud/Swift-Protocol.h>

@class ICRadioContentReference, ICRadioPlaybackHistory, ICStoreRequestContext, NSArray, NSDictionary, NSNumber, NSString, NSURL;

@interface ICRadioGetTracksRequest : NSObject <Swift>

{
    _Bool _allowsExplicitContent;
    _Bool _preservingCurrentlyPlayingItem;
    _Bool _shouldResponseContainStationMetadata;
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

@property (copy, nonatomic) NSDictionary *additionalRequestParameters;
@property (nonatomic) _Bool allowsExplicitContent;
@property (copy, nonatomic) NSArray *playActivityEvents;
@property (copy, nonatomic) ICRadioPlaybackHistory *playbackContext;
@property (nonatomic, getter=isPreservingCurrentlyPlayingItem) _Bool preservingCurrentlyPlayingItem;
@property (copy, nonatomic, getter=isPrivateListeningEnabled) NSNumber *privateListeningEnabled;
@property (copy, nonatomic, getter=isDelegatedPrivateListeningEnabled) NSNumber *delegatedPrivateListeningEnabled;
@property (nonatomic) long long reasonType;
@property (copy, nonatomic) ICStoreRequestContext *requestContext;
@property (nonatomic) _Bool shouldResponseContainStationMetadata;
@property (copy, nonatomic) NSString *stationHash;
@property (nonatomic) long long stationID;
@property (copy, nonatomic) NSString *stationStringID;
@property (copy, nonatomic) NSURL *stationURL;
@property (copy, nonatomic) ICRadioContentReference *seedContentReference;
@property (copy, nonatomic) ICRadioContentReference *nowPlayingContentReference;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)performWithResponseHandler:(CDUnknownBlockType)arg1;

@end
