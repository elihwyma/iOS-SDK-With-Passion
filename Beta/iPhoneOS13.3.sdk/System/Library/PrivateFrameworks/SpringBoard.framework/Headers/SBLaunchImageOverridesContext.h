/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL, SBActivationSettings;

@interface SBLaunchImageOverridesContext : NSObject

{
    NSString *_sceneID;
    SBActivationSettings *_settings;
    _Bool _ignoreSnapshots;
    NSString *_launchImageName;
    NSURL *_url;
}

@property (copy, nonatomic, readonly) NSString *sceneID;
@property (nonatomic, readonly) SBActivationSettings *activationSettings;
@property (nonatomic, readonly) _Bool ignoreSnapshots;
@property (copy, nonatomic, readonly) NSString *launchImageName;
@property (copy, nonatomic, readonly) NSURL *url;

- (id)initWithSceneID:(id)arg1 activationSettings:(id)arg2;

@end
