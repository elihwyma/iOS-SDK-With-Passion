/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary, NSString, PLCloudRecordOrganizer, PLPhotoLibrary;

@interface PLLibrarySyncContext : NSObject

{
    NSMutableDictionary *_assetAdjustmentStatesByCloudIdentifier;
    NSArray *_personUUIDsToDedupe;
    PLPhotoLibrary *_photoLibrary;
    PLCloudRecordOrganizer *_recordOrganizer;
}

@property (readonly) PLPhotoLibrary *photoLibrary;
@property (readonly) PLCloudRecordOrganizer *recordOrganizer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool serverSupportsVision;
@property (nonatomic, readonly) _Bool serverSupportsGraphHome;
@property (nonatomic, readonly) _Bool serverSupportsSuggestion;
@property (copy, nonatomic) NSArray *personUUIDsToDedupe;

- (id)makeFace;
- (void)deleteFaces:(id)arg1;
- (id)personForUUID:(id)arg1;
- (_Bool)personUUIDIsDeleted:(id)arg1;
- (id)assetAdjustmentStateForCloudIdentifier:(id)arg1;
- (id)initWithPhotoLibrary:(id)arg1;
- (void)setAssetAdjustmentState:(id)arg1 forCloudIdentifer:(id)arg2;

@end
