/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

#import <GeoServices/Swift-Protocol.h>

@class GEOSearchAttributionSource, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface GEOSearchAttributionInfo : NSObject <Swift>

{
    GEOSearchAttributionSource *_source;
    NSArray *_logoPaths;
    NSArray *_snippetLogoPaths;
    NSString *_displayName;
    unsigned int _attributionRequirementsMask;
}

@property (nonatomic, readonly) GEOSearchAttributionSource *source;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) unsigned int version;
@property (nonatomic, readonly) unsigned int requirementsMask;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) _Bool shouldOpenInAppStore;
@property (nonatomic, readonly) NSString *webBaseActionURL;
@property (nonatomic, readonly) NSArray *attributionApps;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (_Bool)hasAttributionRequirement:(int)arg1;
- (id)logoPathForScale:(double)arg1;
- (id)initWithSource:(id)arg1 localizedAttribution:(id)arg2 logoPaths:(id)arg3 snippetLogoPaths:(id)arg4;
- (_Bool)supportsActionURLs;
- (id)snippetLogoPathForScale:(double)arg1;
- (void)addLogoPath:(id)arg1;

@end
