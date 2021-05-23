/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Foundation/NSObject.h>

#import <Photos/Swift-Protocol.h>

@interface PHLivePhotoRequestOptions : NSObject <Swift>

{
    _Bool _networkAccessAllowed;
    long long _version;
    long long _deliveryMode;
    CDUnknownBlockType _progressHandler;
}

@property (nonatomic) long long version;
@property (nonatomic) long long deliveryMode;
@property (nonatomic, getter=isNetworkAccessAllowed) _Bool networkAccessAllowed;
@property (copy, nonatomic) CDUnknownBlockType progressHandler;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
