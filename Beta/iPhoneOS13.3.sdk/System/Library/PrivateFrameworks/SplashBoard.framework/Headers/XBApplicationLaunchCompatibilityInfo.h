/*
 Image: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, XBLaunchInterface;

@interface XBApplicationLaunchCompatibilityInfo : NSObject

{
    XBLaunchInterface *_defaultInterface;
    _Bool _launchesOpaque;
    NSArray *_launchInterfaces;
    NSString *_bundleIdentifier;
    NSString *_bundlePath;
    NSString *_sandboxPath;
    NSString *_bundleContainerPath;
    NSString *_defaultGroupIdentifier;
}

@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSString *bundlePath;
@property (copy, nonatomic) NSString *sandboxPath;
@property (copy, nonatomic) NSString *bundleContainerPath;
@property (copy, nonatomic) NSString *defaultGroupIdentifier;
@property (nonatomic) _Bool launchesOpaque;
@property (copy, nonatomic, readonly) XBLaunchInterface *defaultLaunchInterface;
@property (copy, nonatomic, readonly) NSArray *launchInterfaces;
@property (nonatomic, readonly) _Bool allowsSavingLaunchImages;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)compatibilityInfoForAppInfo:(id)arg1;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBundle:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)launchInterfaceWithIdentifier:(id)arg1;
- (void)_setLaunchInterfaces:(id)arg1;
- (id)launchInterfaceIdentifierForRequest:(id)arg1;

@end
