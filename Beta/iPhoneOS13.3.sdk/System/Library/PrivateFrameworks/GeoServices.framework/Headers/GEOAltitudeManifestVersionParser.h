/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOFlyoverRegionVersions, NSError, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface GEOAltitudeManifestVersionParser : NSObject

{
    struct GEOOnce_s _parsed;
    NSURL *_fileURL;
    GEOFlyoverRegionVersions *_versions;
    NSError *_parseError;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (id)initWithFileURL:(id)arg1;
- (id)parse:(id *)arg1;

@end
