/*
 Image: /System/Library/PrivateFrameworks/OSAnalytics.framework/OSAnalytics
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface OSAProxyConfiguration : NSObject

{
    NSString *_logPath;
    NSString *_identifier;
    NSString *_modelCode;
    NSString *_productVersion;
    NSString *_targetAudience;
    NSString *_buildVersion;
    NSString *_osTrain;
    NSString *_productBuildString;
    NSString *_productName;
    NSString *_productNameVersionBuildString;
    NSString *_productReleaseString;
    NSString *_uiCountryCode;
    NSString *_systemId;
    NSString *_serialNumber;
    NSString *_crashReporterKey;
    NSString *_awdReporterKey;
    NSString *_internalKey;
    NSString *_releaseType;
    NSString *_seedGroup;
    NSString *_experimentGroup;
    NSString *_automatedDeviceGroup;
    NSString *_automatedContextURL;
    NSDictionary *_currentTaskingIDByRouting;
}

@property (readonly) NSString *logPath;
@property (readonly) NSString *identifier;
@property (readonly) _Bool isProxy;
@property (readonly) _Bool isInternalBridge;
@property (readonly) NSString *modelCode;
@property (readonly) NSString *productVersion;
@property (readonly) NSString *buildVersion;
@property (readonly) NSString *osTrain;
@property (readonly) NSString *productName;
@property (readonly) NSString *productNameVersionBuildString;
@property (readonly) NSString *targetAudience;
@property (readonly) NSString *uiCountryCode;
@property (readonly) NSString *systemId;
@property (readonly) NSString *internalKey;
@property (readonly) NSString *crashReporterKey;
@property (readonly) NSString *awdReporterKey;
@property (readonly) NSString *releaseType;
@property (readonly) NSString *seedGroup;
@property (readonly) NSString *experimentGroup;
@property (readonly) NSString *automatedDeviceGroup;
@property (readonly) NSString *automatedContextURL;
@property (readonly) NSDictionary *currentTaskingIDByRouting;

- (id)description;
- (id)initFromPath:(id)arg1;
- (id)metadata;
- (id)init:(id)arg1 fromMetadata:(id)arg2;
- (_Bool)isConfigEnabled:(id)arg1;
- (id)assembleMetadataAt:(double)arg1 withOptions:(unsigned int)arg2;
- (_Bool)usesLegacySubmission:(id)arg1;
- (_Bool)isFile:(id)arg1 validForSubmission:(id)arg2 reasonableSize:(long long)arg3 to:(id)arg4 internalTypes:(id)arg5 result:(const char **)arg6;

@end
