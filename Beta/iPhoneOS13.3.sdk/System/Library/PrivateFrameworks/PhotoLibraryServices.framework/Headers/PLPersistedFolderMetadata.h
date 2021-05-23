/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSMutableOrderedSet, NSNumber, NSString, NSURL, PLManagedFolder;

@interface PLPersistedFolderMetadata : NSObject

{
    _Bool _pinned;
    _Bool _inTrash;
    _Bool _customSortAscending;
    int _customSortKey;
    NSString *_title;
    NSString *_uuid;
    NSString *_cloudGUID;
    NSNumber *_kind;
    NSMutableOrderedSet *_childUUIDs;
    NSString *_remappedUUID;
    PLManagedFolder *_folder;
    NSURL *_metadataURL;
}

@property (retain, nonatomic) PLManagedFolder *folder;
@property (retain, nonatomic) NSURL *metadataURL;
@property (retain, nonatomic) NSString *uuid;
@property (retain, nonatomic) NSString *cloudGUID;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSNumber *kind;
@property (nonatomic, getter=isPinned) _Bool pinned;
@property (nonatomic, getter=isInTrash) _Bool inTrash;
@property (nonatomic) _Bool customSortAscending;
@property (nonatomic) int customSortKey;
@property (retain, nonatomic) NSMutableOrderedSet *childUUIDs;
@property (retain, nonatomic, readonly) NSString *remappedUUID;
@property (nonatomic, readonly) _Bool isRootFolder;

+ (_Bool)isValidPath:(id)arg1;
+ (void)updateChildrenOrderingInFolder:(id)arg1 usingChildUUIDs:(id)arg2 sourceDescription:(id)arg3 includePendingChanges:(_Bool)arg4;

- (id)init;
- (id)description;
- (_Bool)_readMetadata;
- (id)initWithPersistedDataAtURL:(id)arg1;
- (void)writePersistedData;
- (void)removePersistedData;
- (void)_saveMetadata;
- (id)initWithPLManagedFolder:(id)arg1 pathManager:(id)arg2;
- (id)insertFolderFromDataInManagedObjectContext:(id)arg1;
- (void)updateChildrenOrderingInFolder:(id)arg1 includePendingChanges:(_Bool)arg2;

@end
