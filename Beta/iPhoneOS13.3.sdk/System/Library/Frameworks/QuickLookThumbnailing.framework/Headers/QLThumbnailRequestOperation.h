/*
 Image: /System/Library/Frameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
 */

#import <Foundation/NSOperation.h>

@class NSDate, NSError, NSObject, QLThumbnailGenerationRequest, QLThumbnailRepresentation;

@protocol OS_dispatch_queue;

@interface QLThumbnailRequestOperation : NSOperation

{
    _Bool _finished;
    _Bool _executing;
    NSDate *_beginDate;
    CDUnknownBlockType _requestUpdateBlock;
    CDUnknownBlockType _requestCompletionBlock;
    NSObject<OS_dispatch_queue> *_serialResponseQueue;
    QLThumbnailGenerationRequest *_request;
    CDUnknownBlockType _thumbnailRequestGenerationWillStartBlock;
    QLThumbnailRepresentation *_mostRepresentativeThumbnail;
    NSError *_thumbnailRequestInvalidError;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialResponseQueue;
@property (retain) QLThumbnailGenerationRequest *request;
@property (copy, nonatomic) CDUnknownBlockType thumbnailRequestGenerationWillStartBlock;
@property (retain, nonatomic) QLThumbnailRepresentation *mostRepresentativeThumbnail;
@property (retain, nonatomic) NSError *thumbnailRequestInvalidError;
@property (copy, nonatomic) CDUnknownBlockType requestUpdateBlock;
@property (copy, nonatomic) CDUnknownBlockType requestCompletionBlock;
@property (nonatomic) double minimumDimension;
@property (nonatomic) unsigned long long requestedTypes;

+ (id)operationWithThumbnailRequest:(id)arg1;

- (void)cancel;
- (void)start;
- (void)main;
- (void)setFinished:(_Bool)arg1;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (_Bool)isConcurrent;
- (_Bool)isAsynchronous;
- (void)_finish;
- (void)setExecuting:(_Bool)arg1;
- (void)_finishWithError:(id)arg1;
- (void)setBadgeType:(unsigned long long)arg1;
- (id)initWithFileAtURL:(id)arg1 size:(struct CGSize)arg2 scale:(double)arg3;
- (unsigned long long)badgeType;
- (_Bool)_finishIfNeeded;
- (id)initWithFPItem:(id)arg1 size:(struct CGSize)arg2 minimumDimension:(double)arg3 scale:(double)arg4 iconMode:(_Bool)arg5;
- (id)initWithThumbnailRequest:(id)arg1;
- (id)initWithFileAtURL:(id)arg1 size:(struct CGSize)arg2 scale:(double)arg3 iconMode:(_Bool)arg4;
- (id)sharedSerialResponseQueue;
- (void)setWantsBaseline:(_Bool)arg1;
- (_Bool)wantsBaseline;
- (void)setGenerationBehavior:(long long)arg1;
- (long long)generationBehavior;
- (void)__finishWithError:(id)arg1;
- (void)_finishIfRequestIsInvalid;

@end
