/*
 Image: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
 */

#import <NSObject.h>

@class NSString;

@interface IPAAdjustmentVersionInfo : NSObject

{
    NSString *_platform;
    NSString *_buildNumber;
    NSString *_appVersion;
    long long _schemaRevision;
}

@property (copy, nonatomic) NSString *platform;
@property (copy, nonatomic) NSString *buildNumber;
@property (copy, nonatomic) NSString *appVersion;
@property (nonatomic) long long schemaRevision;

+ (id)systemBuildVersion;
+ (id)_systemBuildVersion;
+ (id)frameworkVersion;
+ (id)_frameworkVersion;
+ (id)currentVersionInfo;
+ (id)_systemVersionPlistPath;
+ (id)versionInfoFromArchivalRepresentation:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)archivalRepresentation;
- (_Bool)isEqualToVersionInfo:(id)arg1;

@end
