/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <Foundation/NSObject.h>

#import <NeutrinoCore/Swift-Protocol.h>

@class NSString;

@interface NUSoftwareVersion : NSObject <Swift>

{
    NSString *_platform;
    NSString *_buildNumber;
    NSString *_appVersion;
    long long _schemaRevision;
}

@property (copy) NSString *platform;
@property (copy) NSString *buildNumber;
@property (copy) NSString *appVersion;
@property long long schemaRevision;

+ (id)systemBuildVersion;
+ (id)_systemBuildVersion;
+ (id)frameworkVersion;
+ (id)_frameworkVersion;
+ (id)_systemVersionPlistPath;
+ (id)currentSoftwareVersion;
+ (id)softwareVersionFromArchivalRepresentation:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)archivalRepresentation;
- (_Bool)isEqualToSoftwareVersion:(id)arg1;

@end
