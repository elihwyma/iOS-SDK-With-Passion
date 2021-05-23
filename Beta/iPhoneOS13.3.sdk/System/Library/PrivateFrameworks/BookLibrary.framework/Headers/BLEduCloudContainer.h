/*
 Image: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
 */

#import <Foundation/NSObject.h>

@class NSURL;

@protocol OS_dispatch_queue;

@interface BLEduCloudContainer : NSObject

{
    NSURL *_documentsURL;
    id _cloudToken;
    NSURL *_containerURL;
    NSObject<OS_dispatch_queue> *_containerQueue;
}

@property (retain, nonatomic) id cloudToken;
@property (nonatomic, readonly) NSURL *documentsURL;
@property (retain, nonatomic) NSURL *containerURL;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *containerQueue;

+ (id)sharedEduCloudContainer;

- (id)init;
- (_Bool)isSignedIn;
- (_Bool)addBookItem:(id)arg1 error:(id *)arg2;
- (id)allBookItems;
- (id)fileNameForPermlink:(id)arg1;
- (id)cloudUrlForPermlink:(id)arg1;
- (_Bool)_writePlist:(id)arg1 toURL:(id)arg2 error:(id *)arg3;
- (_Bool)_addOrUpdateCloudEntryWithDictionary:(id)arg1 error:(id *)arg2;
- (_Bool)_coordinatedReadOfPromisesWithError:(id *)arg1;
- (id)dictionaryAsBookItem:(id)arg1 path:(id)arg2;
- (id)performMetadataActionOnCloudURL:(id)arg1 action:(CDUnknownBlockType)arg2;
- (_Bool)removeBookItem:(id)arg1 error:(id *)arg2;
- (_Bool)updateBookItem:(id)arg1 error:(id *)arg2;
- (id)bookItemForURL:(id)arg1;
- (id)bookItemForPermlink:(id)arg1;
- (id)bookItemsForPermlinks:(id)arg1;

@end
