/*
 Image: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
 */

#import <Foundation/NSObject.h>

@class NSExtension, NSSet, NSString, NSUUID;

@interface DKReporterAttributes : NSObject

{
    _Bool _headless;
    NSExtension *_extension;
    struct NSString *_bundleIdentifier;
    struct NSString *_name;
    struct NSString *_version;
    struct NSSet *_manifest;
    NSUUID *_uuid;
}

@property (retain, nonatomic) NSUUID *uuid;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *version;
@property (nonatomic, readonly) NSSet *manifest;
@property (nonatomic, readonly) NSExtension *extension;
@property (nonatomic, readonly, getter=isHeadless) _Bool headless;
@property (nonatomic, readonly) NSString *bundleIdentifier;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithExtension:(id)arg1;
- (void)_validateAndAddDomain:(struct NSString *)arg1 withInfo:(struct NSDictionary *)arg2 toManifest:(struct NSMutableSet *)arg3;
- (void)_validateAndAddExtensionManifest:(struct NSDictionary *)arg1 toManifest:(struct NSMutableSet *)arg2;
- (_Bool)isEqualToReportGeneratorAttributes:(id)arg1;

@end
