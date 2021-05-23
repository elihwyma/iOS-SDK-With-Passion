/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Photos/PHMediaRequestContext.h>

@class NSProgress, PHVideoRequestOptions;

@interface PHVideoRequestContext : PHMediaRequestContext

{
    NSProgress *_progress;
    PHVideoRequestOptions *_videoOptions;
    long long _intent;
}

@property (nonatomic, readonly) PHVideoRequestOptions *videoOptions;
@property (nonatomic, readonly) long long intent;

+ (long long)type;

- (CDUnknownBlockType)progressHandler;
- (_Bool)isNetworkAccessAllowed;
- (id)initialRequests;
- (_Bool)shouldReportProgress;
- (id)progresses;
- (void)processMediaResult:(id)arg1 forRequest:(id)arg2;
- (_Bool)representsShareableHighQualityResource;
- (id)initWithRequestID:(int)arg1 managerID:(unsigned long long)arg2 asset:(id)arg3 displaySpec:(id)arg4 options:(id)arg5 intent:(long long)arg6 resultHandler:(CDUnknownBlockType)arg7;
- (id)_lazyProgress;

@end
