/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSSet, NSString, NSURL;

@interface PLFileSystemVolume : PLManagedObject

{
    NSURL *_url;
}

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *uuid;
@property (retain, nonatomic) NSString *volumeUuidString;
@property (copy, nonatomic) NSURL *url;
@property (nonatomic, readonly) _Bool isOffline;
@property (retain, nonatomic) NSSet *resources;

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (id)entityName;
+ (id)volumeForURL:(id)arg1 context:(id)arg2;
+ (id)volumeForVolumeUUID:(id)arg1 context:(id)arg2;
+ (id)volumeForObjectUUID:(id)arg1 context:(id)arg2;
+ (id)predictedURLForVolumeName:(id)arg1;

- (void)awakeFromFetch;
- (void)willTurnIntoFault;
- (void)didTurnIntoFault;
- (void)awakeFromInsert;
- (id)payloadID;
- (id)payloadIDForTombstone:(id)arg1;
- (id)payloadForChangedKeys:(id)arg1;
- (_Bool)supportsCloudUpload;
- (void)_registerWithVolumeManager;
- (void)_unregisterWithVolumeManager;
- (id)predictedURL;

@end
