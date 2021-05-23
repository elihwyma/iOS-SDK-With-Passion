/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@protocol OS_dispatch_queue;

@interface PHImportDeleteJob : NSObject

{
    _Bool _canCancel;
    CDUnknownBlockType _completion;
    NSMutableArray *_cameraFiles;
    NSObject<OS_dispatch_queue> *_serializer;
}

@property (retain, nonatomic) NSMutableArray *cameraFiles;
@property (copy, nonatomic, readonly) CDUnknownBlockType completion;
@property (nonatomic) _Bool canCancel;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serializer;

- (id)initWithCameraFiles:(id)arg1 canCancel:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)deleteNextCameraFile;
- (void)deleteAllCameraFiles;
- (unsigned long long)removeCameraFile:(id)arg1;

@end
