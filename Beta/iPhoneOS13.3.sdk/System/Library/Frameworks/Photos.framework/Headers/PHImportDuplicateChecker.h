/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Foundation/NSObject.h>

@class NSDate, NSMutableDictionary, NSMutableSet, NSString, PFDispatchQueue, PHPhotoLibrary;

@interface PHImportDuplicateChecker : NSObject

{
    NSMutableDictionary *_avchdAssetIdentifierCache;
    NSMutableDictionary *_sizeNameCache;
    NSMutableDictionary *_assetIdentifierCache;
    NSMutableDictionary *_dupInfoByObjectID;
    NSDate *_lastChange;
    NSMutableSet *_updatedDupInfos;
    PFDispatchQueue *_queue;
    PHPhotoLibrary *_library;
    NSMutableDictionary *_foundPPTData;
    NSMutableDictionary *_notFoundPPTData;
    NSMutableDictionary *_generatedPPTData;
}

@property (retain) PFDispatchQueue *queue;
@property (retain, nonatomic) PHPhotoLibrary *library;
@property (retain, nonatomic) NSMutableDictionary *foundPPTData;
@property (retain, nonatomic) NSMutableDictionary *notFoundPPTData;
@property (retain, nonatomic) NSMutableDictionary *generatedPPTData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;
+ (id)dateWithDate:(id)arg1;
+ (id)fetchAssetsFromLibrary:(id)arg1 withPredicates:(id)arg2;
+ (id)duplicateCheckerForClient:(id)arg1 andLibrary:(id)arg2;
+ (id)doneWithDuplicateCheckerForLibrary:(id)arg1 forClient:(id)arg2;
+ (void)addLibrary:(id)arg1;
+ (void)removeLibrary:(id)arg1;

- (id)initWithLibrary:(id)arg1;
- (void)photoLibraryDidChange:(id)arg1;
- (unsigned long long)populateCachesWithAssetsInfos:(id)arg1;
- (void)updateAssetsFromDupInfos;
- (void)setDupInfo:(id)arg1 forFingerprint:(id)arg2 inCache:(id)arg3;
- (void)populateCachesWithAssetInfo:(id)arg1;
- (void)removeDuplicateInfo:(id)arg1 forFingerprint:(id)arg2 inCache:(id)arg3;
- (void)dePopulateCachesWithObjectID:(id)arg1;
- (id)filterDuplicatesForItem:(id)arg1 duplicateSet:(id)arg2 considerItemsInTrash:(_Bool)arg3;
- (id)findMatchingAssetsForItem:(id)arg1 inSet:(id)arg2 matchingDate:(id *)arg3 confidence:(unsigned char *)arg4;
- (_Bool)findFingerprint:(id)arg1 forItem:(id)arg2 inCache:(id)arg3 considerTrash:(_Bool)arg4;
- (void)recordTimeSinceStart:(double)arg1 inData:(id)arg2 forKey:(id)arg3;
- (id)checkForDuplicate:(id)arg1 considerItemsInTheTrash:(_Bool)arg2;
- (void)checkForDuplicates:(id)arg1 considerItemsInTrash:(_Bool)arg2 forEach:(CDUnknownBlockType)arg3 atEnd:(CDUnknownBlockType)arg4;
- (id)getAssetObjectIdsFromObjectIds:(id)arg1;
- (id)generatePPTData;

@end
