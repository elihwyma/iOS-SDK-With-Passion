/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <NSObject.h>

@class NSError, NSString, NSThread;

@interface CPLEngineStoreTransaction : NSObject

{
    NSThread *_currentThread;
    _Bool _forWrite;
    NSError *_error;
    NSString *_name;
}

@property (copy, nonatomic) NSError *error;
@property (copy, nonatomic) NSString *name;

- (id)description;
- (id)redactedDescription;
- (_Bool)canWrite;
- (_Bool)canRead;
- (void)_transactionDidFinish;
- (void)_transactionWillBeginOnThread:(id)arg1;
- (_Bool)do:(CDUnknownBlockType)arg1;
- (id)initForWrite:(_Bool)arg1;
- (_Bool)_forWrite;

@end
