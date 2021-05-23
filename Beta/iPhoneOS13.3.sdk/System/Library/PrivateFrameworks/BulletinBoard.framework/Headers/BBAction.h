/*
 Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import <Foundation/NSObject.h>

@class BBAppearance, NSDictionary, NSString, NSURL;

@interface BBAction : NSObject

{
    CDUnknownBlockType _internalBlock;
    _Bool _deliverResponse;
    NSURL *_launchURL;
    NSString *_launchBundleID;
    _Bool _launchCanBypassPinLock;
    _Bool _authenticationRequired;
    _Bool _shouldDismissBulletin;
    NSString *_activatePluginName;
    NSDictionary *_activatePluginContext;
    long long _actionType;
    NSString *_identifier;
    BBAppearance *_appearance;
    unsigned long long _activationMode;
    NSString *_remoteViewControllerClassName;
    NSString *_remoteServiceBundleIdentifier;
    long long _behavior;
    NSDictionary *_behaviorParameters;
}

@property (copy, nonatomic) CDUnknownBlockType internalBlock;
@property (nonatomic, readonly) _Bool hasLaunchAction;
@property (nonatomic, readonly) _Bool hasPluginAction;
@property (nonatomic, readonly) _Bool hasRemoteViewAction;
@property (nonatomic, readonly) _Bool hasInteractiveAction;
@property (nonatomic) long long actionType;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) BBAppearance *appearance;
@property (nonatomic, getter=isAuthenticationRequired) _Bool authenticationRequired;
@property (nonatomic) _Bool shouldDismissBulletin;
@property (copy, nonatomic) NSURL *launchURL;
@property (copy, nonatomic) NSString *launchBundleID;
@property (nonatomic) _Bool launchCanBypassPinLock;
@property (nonatomic) unsigned long long activationMode;
@property (copy, nonatomic) NSString *activatePluginName;
@property (copy, nonatomic) NSDictionary *activatePluginContext;
@property (copy, nonatomic) NSString *remoteViewControllerClassName;
@property (copy, nonatomic) NSString *remoteServiceBundleIdentifier;
@property (nonatomic) long long behavior;
@property (copy, nonatomic) NSDictionary *behaviorParameters;
@property (nonatomic) _Bool canBypassPinLock;

+ (_Bool)supportsSecureCoding;
+ (id)action;
+ (id)actionWithIdentifier:(id)arg1;
+ (id)actionWithLaunchURL:(id)arg1 callblock:(CDUnknownBlockType)arg2;
+ (id)actionWithLaunchBundleID:(id)arg1 callblock:(CDUnknownBlockType)arg2;
+ (id)actionWithCallblock:(CDUnknownBlockType)arg1;
+ (id)actionWithAppearance:(id)arg1;
+ (id)actionWithIdentifier:(id)arg1 title:(id)arg2;
+ (id)actionWithLaunchURL:(id)arg1;
+ (id)actionWithLaunchBundleID:(id)arg1;
+ (id)actionWithActivatePluginName:(id)arg1 activationContext:(id)arg2;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)replacementObjectForCoder:(id)arg1;
- (id)awakeAfterUsingCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)url;
- (id)bundleID;
- (void)setCallblock:(CDUnknownBlockType)arg1;
- (id)_nameForActionType:(long long)arg1;
- (id)partialDescription;
- (_Bool)deliverResponse:(id)arg1;

@end
