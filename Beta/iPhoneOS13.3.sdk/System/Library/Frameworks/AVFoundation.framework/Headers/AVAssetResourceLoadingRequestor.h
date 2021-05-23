/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVAssetResourceLoadingRequestorInternal;

@interface AVAssetResourceLoadingRequestor : NSObject

{
    AVAssetResourceLoadingRequestorInternal *_requestor;
}

@property (nonatomic, readonly) _Bool providesExpiredSessionReports;

- (void)dealloc;
- (id)initWithRequestInfo:(struct __CFDictionary *)arg1;

@end
