/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

@class NSDate, NSPersonNameComponents, NSString, NSURL;

@protocol NSCoding;

@interface NSFileVersion : NSObject

{
    NSURL *_fileURL;
    id _addition;
    id _deadVersionIdentifier;
    id _nonLocalVersion;
    NSURL *_contentsURL;
    _Bool _isBackup;
    NSString *_localizedName;
    NSString *_localizedComputerName;
    NSDate *_modificationDate;
    _Bool _isResolved;
    _Bool _contentsURLIsAccessed;
    id _reserved;
    NSString *_name;
    _Bool _discardable;
}

@property (readonly) unsigned long long size;
@property (readonly, getter=isUbiquitous) _Bool ubiquitous;
@property (copy, readonly) NSString *originatorName;
@property (copy, readonly) NSString *originalPOSIXName;
@property (copy, readonly) NSString *etag;
@property (readonly, getter=_isBackup) _Bool _isBackup;
@property (copy, readonly) NSURL *URL;
@property (copy, readonly) NSString *localizedName;
@property (copy, readonly) NSString *localizedNameOfSavingComputer;
@property (copy, readonly) NSPersonNameComponents *originatorNameComponents;
@property (copy, readonly) NSDate *modificationDate;
@property (retain, readonly) id <NSCoding> persistentIdentifier;
@property (readonly, getter=isConflict) _Bool conflict;
@property (getter=isResolved) _Bool resolved;
@property (getter=isDiscardable) _Bool discardable;
@property (readonly) _Bool hasLocalContents;
@property (readonly) _Bool hasThumbnail;

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (void)_removeTemporaryDirectoryAtURL:(id)arg1;
+ (id)_versionOfItemAtURL:(id)arg1 forClientID:(id)arg2 name:(id)arg3 temporaryStorageIdentifier:(id)arg4 evenIfDeleted:(_Bool)arg5;
+ (id)_otherVersionsOfItemAtURL:(id)arg1 temporaryStorageIdentifier:(id)arg2;
+ (void)getNonlocalVersionsOfItemAtURL:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (id)_versionOfItemAtURL:(id)arg1 forPersistentIdentifier:(id)arg2 temporaryStorageIdentifier:(id)arg3;
+ (id)versionOfItemAtURL:(id)arg1 forPersistentIdentifier:(id)arg2;
+ (_Bool)_removeOtherVersionsOfItemAtURL:(id)arg1 temporaryStorageIdentifier:(id)arg2 error:(id *)arg3;
+ (id)currentVersionOfItemAtURL:(id)arg1;
+ (id)otherVersionsOfItemAtURL:(id)arg1;
+ (void)getNonlocalVersionsOfItemAtURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)addVersionOfItemAtURL:(id)arg1 withContentsOfURL:(id)arg2 options:(unsigned long long)arg3 error:(id *)arg4;
+ (id)temporaryDirectoryURLForNewVersionOfItemAtURL:(id)arg1;
+ (id)unresolvedConflictVersionsOfItemAtURL:(id)arg1;
+ (_Bool)removeOtherVersionsOfItemAtURL:(id)arg1 error:(id *)arg2;
+ (id)_autosaveDirectoryURLCreateIfNecessary:(_Bool)arg1;
+ (_Bool)_isTemporaryStorageRequiredForGSError:(id)arg1 andURL:(id)arg2;
+ (id)_makeTemporaryStorageIdentifier;
+ (id)_temporaryStorageLocationForIdentifier:(id)arg1;
+ (id)_makePermanentStorageLibraryForURL:(id)arg1 temporaryStorageRequired:(_Bool *)arg2 error:(id *)arg3;
+ (struct NSObject *)_existingLibraryForURL:(id)arg1 temporaryStorageIdentifier:(id)arg2;
+ (id)_otherVersionsOfItemAtURL:(id)arg1 temporaryStorageIdentifier:(id)arg2 withoutOptions:(unsigned long long)arg3;
+ (struct NSObject *)_libraryForURL:(id)arg1 temporaryStorageIdentifier:(id *)arg2;
+ (id)_addVersionOfItemAtURL:(id)arg1 withContentsOfURL:(id)arg2 options:(unsigned long long)arg3 userInfo:(id)arg4 temporaryStorageIdentifier:(id *)arg5 error:(id *)arg6;
+ (void)discoverUbiquitousVersionsOfItemAtURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)_supportedGenerationalStorageClientIDs;
+ (_Bool)_permanentVersionStorageSupportedForURL:(id)arg1 temporaryStorageIdentifier:(id *)arg2 error:(id *)arg3;
+ (id)_otherNonpurgeableVersionsOfItemAtURL:(id)arg1 temporaryStorageIdentifier:(id)arg2;
+ (id)_addVersionOfItemAtURL:(id)arg1 withContentsOfURL:(id)arg2 options:(unsigned long long)arg3 temporaryStorageIdentifier:(id *)arg4 error:(id *)arg5;
+ (id)_temporaryDirectoryURLForNewVersionOfItemAtURL:(id)arg1 temporaryStorageIdentifier:(id)arg2;
+ (_Bool)unresolvedConflictsExistForItemAtURL:(id)arg1;
+ (id)versionsOfItemAtURL:(id)arg1;
+ (_Bool)_conflictsExistForItemAtURL:(id)arg1;
+ (void)_markConflicts:(id)arg1 asHandledForItemAtURL:(id)arg2;
+ (void *)_addConflictObserverForItemAtURL:(id)arg1 statusChangedHandler:(CDUnknownBlockType)arg2;
+ (void)_removeConflictObserver:(void *)arg1;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)_initWithFileURL:(id)arg1 library:(id)arg2 clientID:(id)arg3 name:(id)arg4 contentsURL:(id)arg5 isBackup:(_Bool)arg6 revision:(id)arg7;
- (id)_initWithAddition:(id)arg1;
- (_Bool)removeAndReturnError:(id *)arg1;
- (id)replaceItemAtURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (id)_documentInfo;
- (id)_initWithFileURL:(id)arg1 nonLocalVersion:(id)arg2;
- (_Bool)_setDocumentInfo:(id)arg1;
- (void)_overrideModificationDateWithDate:(id)arg1;
- (_Bool)_preserveConflictVersionLocally;
- (id)restoreOverItemAtURL:(id)arg1 error:(id *)arg2;

@end
