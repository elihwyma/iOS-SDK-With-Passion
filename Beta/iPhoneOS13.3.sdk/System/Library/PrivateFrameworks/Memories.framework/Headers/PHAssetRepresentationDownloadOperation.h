/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSOperation.h>

@class NSError, NSRecursiveLock, NSURL, PHAssetRepresentation;

@protocol PHAssetRepresentationDownloadOperationDelegate;

__attribute__((visibility("hidden")))
@interface PHAssetRepresentationDownloadOperation : NSOperation

{
    _Bool finished;
    _Bool executing;
    _Bool _userInitiated;
    _Bool _failed;
    int _imageRequestID;
    NSError *_error;
    id <PHAssetRepresentationDownloadOperationDelegate> _delegate;
    PHAssetRepresentation *_representation;
    NSRecursiveLock *_statusLock;
    double _progress;
    NSURL *_identifierURL;
}

@property (getter=isFailed) _Bool failed;
@property (retain) NSError *error;
@property (getter=isFinished) _Bool finished;
@property (getter=isExecuting) _Bool executing;
@property (retain) NSRecursiveLock *statusLock;
@property double progress;
@property (nonatomic) int imageRequestID;
@property (retain, nonatomic) NSURL *identifierURL;
@property (getter=isUserInitiated) _Bool userInitiated;
@property (weak, nonatomic) id <PHAssetRepresentationDownloadOperationDelegate> delegate;
@property (retain, nonatomic) PHAssetRepresentation *representation;

- (void)cancel;
- (void)start;
- (_Bool)isConcurrent;
- (void)finish;
- (id)initWithRepresentation:(id)arg1;

@end
