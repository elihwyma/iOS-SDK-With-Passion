/*
 Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <CoreDAV/CoreDAVTask.h>

@class NSURL;

@interface CoreDAVCopyOrMoveTask : CoreDAVTask

{
    int _overwrite;
    NSURL *_destinationURL;
    NSURL *_priorOrderedURL;
    _Bool _shouldSendOrder;
}

@property (nonatomic) int overwrite;
@property (retain, nonatomic) NSURL *destinationURL;
@property (retain, nonatomic) NSURL *priorOrderedURL;

+ (id)stringFromOverwriteValue:(int)arg1;

- (id)description;
- (id)initWithURL:(id)arg1;
- (id)requestBody;
- (id)additionalHeaderValues;
- (id)initWithSourceURL:(id)arg1 destinationURL:(id)arg2;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)initWithSourceURL:(id)arg1 destinationURL:(id)arg2 andOverwrite:(int)arg3;
- (void)_callBackToDelegateWithResponses:(id)arg1 error:(id)arg2;

@end
