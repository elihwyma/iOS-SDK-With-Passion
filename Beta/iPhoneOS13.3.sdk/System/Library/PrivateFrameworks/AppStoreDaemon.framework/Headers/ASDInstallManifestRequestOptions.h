/*
 Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

#import <AppStoreDaemon/ASDRequestOptions.h>

@class ASDJobManifest;

@interface ASDInstallManifestRequestOptions : ASDRequestOptions

{
    ASDJobManifest *_manifest;
}

@property (copy, nonatomic) ASDJobManifest *manifest;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithManifest:(id)arg1;

@end
