/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL;

@protocol SBActivationSettings;

@interface SBDeviceApplicationScenePlaceholderContentContext : NSObject

{
    long long _layoutEnvironment;
    id <SBActivationSettings> _settings;
    NSString *_requestedLaunchIdentifier;
    NSURL *_url;
    _Bool _prefersLiveXIB;
    unsigned long long _preferredContentType;
}

@property (copy, nonatomic) id <SBActivationSettings> activationSettings;
@property (nonatomic) long long layoutEnvironment;
@property (copy, nonatomic) NSString *requestedLaunchIdentifier;
@property (copy, nonatomic) NSURL *url;
@property (nonatomic) _Bool prefersLiveXIB;
@property (nonatomic) unsigned long long preferredContentType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool canShowUserContent;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)initWithActivationSettings:(id)arg1;

@end
