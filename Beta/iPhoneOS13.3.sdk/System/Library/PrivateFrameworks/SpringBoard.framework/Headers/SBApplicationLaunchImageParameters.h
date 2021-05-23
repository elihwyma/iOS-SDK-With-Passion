/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SBApplicationLaunchImageParameters : NSObject

{
    NSString *_defaultPNGName;
    NSString *_extension;
    NSString *_minOSVersionString;
    struct CGSize _size;
    long long _interfaceOrientation;
}

@property (copy, nonatomic, readonly) NSString *defaultPNGName;
@property (copy, nonatomic, readonly) NSString *extension;
@property (copy, nonatomic, readonly) NSString *minOSVersionString;
@property (nonatomic, readonly) struct CGSize size;
@property (nonatomic, readonly) long long interfaceOrientation;

+ (id)launchImageParametersFromLaunchImagesInfo:(id)arg1 withBundleIdentifier:(id)arg2 isMonarchLinked:(_Bool)arg3;
+ (id)validInfoPlistOrientationKeys;
+ (id)_sanitizedImageNameFromName:(id)arg1 withExtension:(id)arg2 actualExtension:(out id *)arg3;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)_initWithDefaultPNGName:(id)arg1 extension:(id)arg2 minOSVersionString:(id)arg3 size:(struct CGSize)arg4 interfaceOrientation:(long long)arg5;

@end
