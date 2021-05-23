/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface PLPhotoEditExporterMetadataConverter : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)install;

- (id)videoMetadataForVariation:(id)arg1 error:(id *)arg2;
- (_Bool)setImageVariation:(id)arg1 properties:(id)arg2 error:(id *)arg3;
- (id)photoProcessingFlagsFromProperties:(id)arg1 error:(id *)arg2;
- (_Bool)setPhotoProcessingFlags:(id)arg1 properties:(id)arg2 error:(id *)arg3;
- (id)photoFeatureFlags:(id)arg1 error:(id *)arg2;
- (_Bool)setPhotoFeatureFlags:(id)arg1 properties:(id)arg2 error:(id *)arg3;

@end
