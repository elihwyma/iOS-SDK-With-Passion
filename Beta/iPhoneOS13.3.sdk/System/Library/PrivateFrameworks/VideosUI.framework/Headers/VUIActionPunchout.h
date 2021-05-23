/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUI/VUIAction.h>

@class IKAppContext, NSString, NSURL, VUIContentMetadata, WLKChannelDetails;

__attribute__((visibility("hidden")))
@interface VUIActionPunchout : VUIAction

{
    _Bool _isEntitledToPlay;
    _Bool _isPlaybackURL;
    NSURL *_punchoutURL;
    WLKChannelDetails *_channelDetails;
    VUIContentMetadata *_contentMetadata;
    NSString *_externalID;
    NSString *_referenceID;
    NSString *_canonicalID;
    NSString *_contentTitle;
    IKAppContext *_appContext;
}

@property (nonatomic) _Bool isPlaybackURL;
@property (copy, nonatomic) NSString *contentTitle;
@property (retain, nonatomic) IKAppContext *appContext;
@property (retain, nonatomic) NSURL *punchoutURL;
@property (retain, nonatomic) WLKChannelDetails *channelDetails;
@property (nonatomic) _Bool isEntitledToPlay;
@property (retain, nonatomic) VUIContentMetadata *contentMetadata;
@property (retain, nonatomic) NSString *externalID;
@property (retain, nonatomic) NSString *referenceID;
@property (retain, nonatomic) NSString *canonicalID;

- (_Bool)isAccountRequired;
- (void)performWithTargetResponder:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithContextData:(id)arg1 appContext:(id)arg2;
- (_Bool)_isValidAppInstalled;
- (void)_openAirplayPicker:(CDUnknownBlockType)arg1;
- (void)_startAppInstallFlow:(CDUnknownBlockType)arg1;
- (void)_openPunchoutURL:(CDUnknownBlockType)arg1;

@end
