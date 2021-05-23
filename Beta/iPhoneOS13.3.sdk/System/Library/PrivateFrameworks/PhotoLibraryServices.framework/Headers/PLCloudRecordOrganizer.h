/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, PLPhotoLibrary;

@interface PLCloudRecordOrganizer : NSObject

{
    PLPhotoLibrary *_photoLibrary;
    NSMutableArray *_assetRecordsWithContainerChange;
    NSMutableArray *_albumRecordsWithContainerChange;
    NSMutableArray *_personRecords;
    NSMutableArray *_scopeRecords;
    NSMutableArray *_masterRecords;
    NSMutableArray *_assetRecords;
    NSMutableArray *_albumRecords;
    NSMutableArray *_memoryRecords;
    NSMutableArray *_faceCropRecords;
    NSMutableArray *_deleteRecords;
    NSMutableArray *_deletePersonRecords;
    NSMutableArray *_expungedRecords;
    NSMutableArray *_suggestionRecords;
}

@property (readonly) NSMutableArray *assetRecordsWithContainerChange;
@property (readonly) NSMutableArray *albumRecordsWithContainerChange;
@property (readonly) NSMutableArray *personRecords;
@property (readonly) NSMutableArray *scopeRecords;
@property (readonly) NSMutableArray *masterRecords;
@property (readonly) NSMutableArray *assetRecords;
@property (readonly) NSMutableArray *albumRecords;
@property (readonly) NSMutableArray *memoryRecords;
@property (readonly) NSMutableArray *faceCropRecords;
@property (readonly) NSMutableArray *deleteRecords;
@property (readonly) NSMutableArray *deletePersonRecords;
@property (readonly) NSMutableArray *expungedRecords;
@property (readonly) NSMutableArray *suggestionRecords;

+ (_Bool)records:(id)arg1 containsScopedIdentifier:(id)arg2;

- (id)initWithPhotoLibrary:(id)arg1;
- (void)organizeRecords:(id)arg1;

@end
