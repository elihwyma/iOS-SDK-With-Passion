/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

#import <GeoServices/Swift-Protocol.h>

@class NSArray, NSString;

@interface GEOResourceManifestConfiguration : NSObject <Swift>

{
    unsigned int _tileGroupIdentifier;
    NSString *_os;
    NSString *_osVersion;
    NSString *_osBuild;
    NSString *_countryCode;
    NSString *_hardwareIdentifier;
    NSString *_applicationIdentifier;
    NSString *_applicationVersion;
    NSString *_environment;
    NSString *_dataDirectory;
    int _defaultScale;
    _Bool _requiresLegacyFormat;
    NSArray *_tileSetOverrides;
}

@property (copy, nonatomic) NSArray *tileSetOverrides;
@property (nonatomic) unsigned int tileGroupIdentifier;
@property (copy, nonatomic) NSString *os;
@property (copy, nonatomic) NSString *osVersion;
@property (copy, nonatomic) NSString *osBuild;
@property (copy, nonatomic) NSString *countryCode;
@property (copy, nonatomic) NSString *hardwareIdentifier;
@property (copy, nonatomic) NSString *applicationIdentifier;
@property (copy, nonatomic) NSString *applicationVersion;
@property (copy, nonatomic) NSString *environment;
@property (copy, nonatomic) NSString *dataDirectory;
@property (nonatomic, readonly) int defaultScale;
@property (nonatomic, readonly) _Bool requiresLegacyFormat;
@property (nonatomic, readonly) NSString *directorySuffix;

+ (_Bool)supportsSecureCoding;
+ (id)defaultConfiguration;
+ (id)configurationWithPairedDevice:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isDefaultConfiguration;
- (id)_directorySuffixParameters;
- (id)manifestDictionaryRepresentation;

@end
