/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <CATOperation.h>

@class NSError, NSURL;

@interface CRKUnzipOperation : CATOperation

{
    NSURL *_zipFileURL;
    NSURL *_destinationDirectoryURL;
    struct _BOMCopier *_copier;
    NSError *_stashedError;
}

@property (nonatomic, readonly) NSURL *zipFileURL;
@property (nonatomic, readonly) NSURL *destinationDirectoryURL;
@property struct _BOMCopier *copier;
@property (retain, nonatomic) NSError *stashedError;

+ (id)errorFromBOMCopierStatus:(int)arg1 message:(id)arg2;

- (void)cancel;
- (void)main;
- (void)operationWillFinish;
- (id)initWithZipFileURL:(id)arg1;
- (id)initWithZipFileURL:(id)arg1 destinationDirectoryURL:(id)arg2;

@end
