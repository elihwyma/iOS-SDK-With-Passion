/*
 Image: /System/Library/Frameworks/ImageCaptureCore.framework/ImageCaptureCore
 */

#import <Foundation/NSObject.h>

@class ICCameraDevice, ICCameraFolder, NSDate, NSDictionary, NSMutableDictionary, NSString;

@interface ICCameraItem : NSObject

{
    _Bool _locked;
    _Bool _raw;
    _Bool _inTemporaryStore;
    _Bool _addedAfterContentCatalogCompleted;
    _Bool _hasThumbnail;
    _Bool _hasMetadata;
    unsigned int _ptpObjectHandle;
    unsigned int _objectHandle;
    ICCameraDevice *_device;
    ICCameraFolder *_parentFolder;
    NSString *_name;
    NSString *_UTI;
    NSDate *_creationDate;
    NSDate *_modificationDate;
    NSMutableDictionary *_userData;
    struct CGImage *_thumbnailIfAvailable;
    struct CGImage *_largeThumbnailIfAvailable;
    NSDictionary *_metadataIfAvailable;
    CDUnknownBlockType _completionBlock;
    CDUnknownBlockType _completionBlock_deprecated;
    CDUnknownBlockType _downloadCompletionBlock;
    unsigned long long _parentID;
    unsigned long long _ownerID;
    unsigned long long _twinID;
    unsigned long long _objectID;
    id _userObject;
    NSString *_relativeFileSystemPath;
}

@property (retain, nonatomic) ICCameraDevice *device;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *UTI;
@property (copy, nonatomic) NSDate *creationDate;
@property (copy, nonatomic) NSDate *modificationDate;
@property (retain, nonatomic) NSMutableDictionary *userData;
@property (nonatomic) unsigned int objectHandle;
@property (copy, nonatomic) NSString *fileSystemPath;
@property (nonatomic, getter=isLocked) _Bool locked;
@property (nonatomic, getter=isRaw) _Bool raw;
@property (nonatomic, readonly) unsigned long long unsignedIntegerValue;
@property (copy) CDUnknownBlockType completionBlock;
@property (copy) CDUnknownBlockType completionBlock_deprecated;
@property (copy) CDUnknownBlockType downloadCompletionBlock;
@property (readonly) unsigned long long parentID;
@property (readonly) unsigned long long ownerID;
@property (readonly) unsigned long long twinID;
@property (readonly) unsigned long long objectID;
@property (readonly) _Bool hasThumbnail;
@property (readonly) _Bool hasMetadata;
@property (retain) id userObject;
@property (retain, nonatomic) ICCameraFolder *parentFolder;
@property (readonly) NSString *relativeFileSystemPath;
@property (nonatomic, readonly, getter=isInTemporaryStore) _Bool inTemporaryStore;
@property (nonatomic, readonly) struct CGImage *thumbnail;
@property (nonatomic, readonly) NSDictionary *metadata;
@property (nonatomic, readonly) unsigned int ptpObjectHandle;
@property (nonatomic, readonly, getter=wasAddedAfterContentCatalogCompleted) _Bool addedAfterContentCatalogCompleted;
@property (readonly) struct CGImage *thumbnailIfAvailable;
@property (readonly) struct CGImage *largeThumbnailIfAvailable;
@property (readonly) NSDictionary *metadataIfAvailable;

- (void)dealloc;
- (id)description;
- (id)valueForUndefinedKey:(id)arg1;
- (void)setObjectID:(unsigned long long)arg1;
- (void)setParentID:(unsigned long long)arg1;
- (void)setTwinID:(unsigned long long)arg1;
- (long long)compareCameraItem:(id)arg1;
- (void)setOwnerID:(unsigned long long)arg1;
- (id)initWithName:(id)arg1 parentFolder:(id)arg2 device:(id)arg3;
- (void)flushMetadataCache;
- (void)flushThumbnailCache;
- (void)requestThumbnail;
- (void)requestMetadata;
- (void)appendToPath:(id)arg1;

@end
