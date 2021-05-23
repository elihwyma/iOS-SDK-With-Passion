/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, NSURL;

@interface PLFilesystemDeletionInfo : NSObject

{
    NSString *_directory;
    NSString *_filename;
    NSURL *_objectIDURI;
    NSArray *_fileURLs;
    unsigned long long _thumbnailIndex;
    NSString *_thumbnailIdentifier;
    NSString *_uuid;
    unsigned long long _timestamp;
}

@property (retain) NSArray *fileURLs;
@property (retain) NSString *thumbnailIdentifier;
@property (readonly) NSURL *objectIDURI;
@property (readonly) unsigned long long thumbnailIndex;
@property (readonly) NSString *uuid;
@property (readonly) unsigned long long timestamp;
@property (readonly) NSString *directory;
@property (readonly) NSString *filename;

+ (id)deletionInfoWithAsset:(id)arg1;

- (id)description;
- (id)initWithObjectIDURI:(id)arg1 directory:(id)arg2 filename:(id)arg3 fileURLs:(id)arg4 thumbnailIndex:(unsigned long long)arg5 thumbnailIdentifier:(id)arg6 uuid:(id)arg7 timestamp:(unsigned long long)arg8;

@end
