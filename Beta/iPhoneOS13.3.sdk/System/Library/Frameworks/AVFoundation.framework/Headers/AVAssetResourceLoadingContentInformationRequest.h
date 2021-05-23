/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVAssetResourceLoadingContentInformationRequestInternal, NSArray, NSDate, NSString;

@interface AVAssetResourceLoadingContentInformationRequest : NSObject

{
    AVAssetResourceLoadingContentInformationRequestInternal *_contentInformationRequest;
}

@property (copy, nonatomic) NSString *contentType;
@property (nonatomic, readonly) NSArray *allowedContentTypes;
@property (nonatomic) long long contentLength;
@property (nonatomic, getter=isByteRangeAccessSupported) _Bool byteRangeAccessSupported;
@property (copy, nonatomic) NSDate *renewalDate;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)propertyList;
- (id)initWithLoadingRequest:(id)arg1 allowedContentTypes:(id)arg2;
- (_Bool)isDiskCachingPermitted;
- (void)setDiskCachingPermitted:(_Bool)arg1;

@end
