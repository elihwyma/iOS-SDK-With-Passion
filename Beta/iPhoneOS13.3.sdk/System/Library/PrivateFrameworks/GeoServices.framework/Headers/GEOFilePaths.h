/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@interface GEOFilePaths : NSObject

+ (void)initialize;
+ (id)geodCacheDirectoryPath;
+ (id)preferencesDirectoryPath;
+ (id)geoServicesCacheDirectoryPath;
+ (id)tileCacheDirectoryPath;
+ (id)aleStringsCacheDirectoryPath;
+ (id)pdPlaceCacheFilePath;
+ (id)homeDirectory;
+ (id)phoneNumberMUIDMappingFilePath;
+ (id)placeDataCacheDirectoryPath;
+ (id)requestCountsDBFilePath;
+ (id)locationShifterDBFilePath;
+ (id)imageServiceDBFileURL;
+ (id)analyticsUploadDirectoryPath;
+ (id)mapsSuggestionsCacheDirectoryPath;
+ (id)geodLibraryDirectoryURL;
+ (id)analtyicsPipelineFilePath;

@end
