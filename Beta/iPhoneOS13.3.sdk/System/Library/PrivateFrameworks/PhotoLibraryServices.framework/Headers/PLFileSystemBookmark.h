/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSData, NSString, NSURL, PLInternalResource;

@interface PLFileSystemBookmark : PLManagedObject

{
    NSURL *_fileSystemURL;
}

@property (retain, nonatomic) NSData *bookmarkData;
@property (retain, nonatomic) NSString *pathRelativeToVolume;
@property (retain, nonatomic) PLInternalResource *resource;

+ (id)entityName;
+ (id)fileSystemBookmarkFromURL:(id)arg1 context:(id)arg2;

- (id)payloadID;
- (id)payloadForChangedKeys:(id)arg1;
- (_Bool)supportsCloudUpload;
- (id)fileSystemURL;

@end
