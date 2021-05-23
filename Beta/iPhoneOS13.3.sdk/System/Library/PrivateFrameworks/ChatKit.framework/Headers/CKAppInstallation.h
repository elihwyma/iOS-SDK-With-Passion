/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Foundation/NSObject.h>

@class LSApplicationProxy, LSApplicationWorkspace, NSString, UIImage;

@interface CKAppInstallation : NSObject

{
    NSString *_bundleIdentifier;
    LSApplicationProxy *_proxy;
    UIImage *_icon;
    double _percentComplete;
    unsigned long long _installState;
    double _startTime;
    LSApplicationWorkspace *__applicationWorkspace;
}

@property (retain, nonatomic) LSApplicationProxy *proxy;
@property (nonatomic) double percentComplete;
@property (nonatomic) unsigned long long installState;
@property (nonatomic) double startTime;
@property (nonatomic, readonly) LSApplicationWorkspace *_applicationWorkspace;
@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) NSString *pluginBundleIdentifier;
@property (nonatomic, readonly) NSString *localizedDisplayName;
@property (nonatomic, readonly) UIImage *icon;
@property (nonatomic, readonly) _Bool installed;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1 startTime:(double)arg2;

@end
