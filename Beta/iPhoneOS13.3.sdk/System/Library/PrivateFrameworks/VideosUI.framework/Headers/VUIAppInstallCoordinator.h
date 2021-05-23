/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class NSString, NSUUID, VUIAccessViewController, VUIAppInstallerViewController, WLKChannelDetails;

__attribute__((visibility("hidden")))
@interface VUIAppInstallCoordinator : NSObject

{
    WLKChannelDetails *_channelDetails;
    NSString *_contentTitle;
    VUIAppInstallerViewController *_installerViewController;
    VUIAccessViewController *_accessViewController;
    NSUUID *_uuid;
}

@property (retain, nonatomic) WLKChannelDetails *channelDetails;
@property (retain, nonatomic) NSString *contentTitle;
@property (retain, nonatomic) VUIAppInstallerViewController *installerViewController;
@property (retain, nonatomic) VUIAccessViewController *accessViewController;
@property (retain, nonatomic) NSUUID *uuid;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)_installAppWithChannel:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithChannelDetails:(id)arg1 contentTitle:(id)arg2;
- (void)installAppWithCompletion:(CDUnknownBlockType)arg1;

@end
