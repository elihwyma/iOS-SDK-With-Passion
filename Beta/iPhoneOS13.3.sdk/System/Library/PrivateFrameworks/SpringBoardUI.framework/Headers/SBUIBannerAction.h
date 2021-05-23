/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface SBUIBannerAction : NSObject

{
    CDUnknownBlockType _actionBlock;
    NSString *_remoteViewControllerClassName;
    NSString *_remoteServiceBundleIdentifier;
    unsigned long long _behavior;
    unsigned long long _activationMode;
    NSString *_identifier;
    NSDictionary *_parameters;
}

@property (copy, nonatomic) CDUnknownBlockType actionBlock;
@property (copy, nonatomic) NSString *remoteViewControllerClassName;
@property (copy, nonatomic) NSString *remoteServiceBundleIdentifier;
@property (nonatomic) unsigned long long behavior;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSDictionary *parameters;
@property (nonatomic, readonly) unsigned long long activationMode;

+ (id)actionWithBlock:(CDUnknownBlockType)arg1;

- (id)initWithActionBlock:(CDUnknownBlockType)arg1 remoteViewControllerClassName:(id)arg2 remoteServiceBundleIdentifier:(id)arg3 actionIdentifier:(id)arg4 activationMode:(unsigned long long)arg5 behavior:(unsigned long long)arg6 parameters:(id)arg7;

@end
