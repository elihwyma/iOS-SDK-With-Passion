/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSString;

__attribute__((visibility("hidden")))
@interface AVAssetResourceLoadingContentInformationRequestInternal : NSObject

{
    NSString *contentType;
    NSArray *allowedContentTypes;
    long long contentLength;
    _Bool byteRangeAccessSupported;
    NSDate *renewalDate;
    _Bool diskCachingPermitted;
}

@end
