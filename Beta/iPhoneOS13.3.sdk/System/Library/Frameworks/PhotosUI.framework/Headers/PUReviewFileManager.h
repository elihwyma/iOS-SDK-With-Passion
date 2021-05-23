/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NSFileManager, NSURL;

@protocol OS_dispatch_queue;

@interface PUReviewFileManager : NSObject

{
    NSFileManager *__fileManager;
    NSObject<OS_dispatch_queue> *__fileManagementQueue;
    NSURL *__safePathURL;
}

@property (nonatomic, readonly) NSFileManager *_fileManager;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_fileManagementQueue;
@property (nonatomic, readonly) NSURL *_safePathURL;

+ (id)defaultManager;

- (_Bool)removeItemAtURL:(id)arg1 error:(id *)arg2;
- (id)initWithFileManager:(id)arg1;
- (void)removeItemAtURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)_allowedToDeleteItemAtURL:(id)arg1;
- (_Bool)_removeItemAtURL:(id)arg1 error:(id *)arg2 stackshot:(id)arg3;

@end
