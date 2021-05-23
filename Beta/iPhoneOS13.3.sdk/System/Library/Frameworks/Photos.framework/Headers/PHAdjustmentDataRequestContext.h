/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Photos/PHMediaRequestContext.h>

@class PHImageRequestOptions;

@interface PHAdjustmentDataRequestContext : PHMediaRequestContext

{
    PHImageRequestOptions *_options;
}

@property (nonatomic, readonly) PHImageRequestOptions *options;

+ (long long)type;

- (_Bool)isNetworkAccessAllowed;
- (id)initialRequests;
- (void)processMediaResult:(id)arg1 forRequest:(id)arg2;
- (id)initWithRequestID:(int)arg1 managerID:(unsigned long long)arg2 asset:(id)arg3 options:(id)arg4 resultHandler:(CDUnknownBlockType)arg5;

@end
