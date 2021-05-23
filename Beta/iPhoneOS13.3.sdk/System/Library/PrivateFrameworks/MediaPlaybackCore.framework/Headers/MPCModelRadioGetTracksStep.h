/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <Foundation/NSObject.h>

@class ICRadioGetTracksRequest, ICRadioGetTracksResponse, ICUserIdentityProperties, NSError, SSVPlayActivityController;

@interface MPCModelRadioGetTracksStep : NSObject

{
    NSError *_error;
    _Bool _finished;
    SSVPlayActivityController *_playActivityController;
    unsigned long long _playActivitySessionToken;
    ICUserIdentityProperties *_identityProperties;
    ICUserIdentityProperties *_delegatedIdentityProperties;
    ICRadioGetTracksRequest *_request;
    ICRadioGetTracksResponse *_response;
    ICRadioGetTracksResponse *_siriAssetInfoGetTracksResponse;
    unsigned long long _playActitySessionToken;
}

@property (copy, nonatomic, readonly) ICUserIdentityProperties *delegatedIdentityProperties;
@property (copy, nonatomic, readonly) NSError *error;
@property (nonatomic, readonly, getter=isFinished) _Bool finished;
@property (copy, nonatomic, readonly) ICUserIdentityProperties *identityProperties;
@property (copy, nonatomic, readonly) SSVPlayActivityController *playActivityController;
@property (nonatomic, readonly) unsigned long long playActitySessionToken;
@property (copy, nonatomic, readonly) ICRadioGetTracksRequest *request;
@property (copy, nonatomic, readonly) ICRadioGetTracksResponse *response;
@property (nonatomic, readonly) ICRadioGetTracksResponse *siriAssetInfoGetTracksResponse;

- (void)performWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithGetTracksRequest:(id)arg1 siriAssetInfo:(id)arg2 playActivityController:(id)arg3;
- (id)initWithPreviousStep:(id)arg1;
- (void)_performDefaultHandlingForButtonAction:(id)arg1;
- (void)_presentServerDialog:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)nextStepWithError:(id)arg1;
- (void)_fireAndForgetServerDialog:(id)arg1;

@end
