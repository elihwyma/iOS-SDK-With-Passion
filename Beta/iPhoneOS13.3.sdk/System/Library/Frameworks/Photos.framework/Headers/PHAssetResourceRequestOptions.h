/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Foundation/NSObject.h>

#import <Photos/Swift-Protocol.h>

@interface PHAssetResourceRequestOptions : NSObject <Swift>

{
    _Bool _networkAccessAllowed;
    _Bool _resistentToPrune;
    _Bool _downloadIsTransient;
    CDUnknownBlockType _progressHandler;
}

@property (nonatomic) _Bool resistentToPrune;
@property (nonatomic) _Bool downloadIsTransient;
@property (nonatomic, getter=isNetworkAccessAllowed) _Bool networkAccessAllowed;
@property (copy, nonatomic) CDUnknownBlockType progressHandler;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
