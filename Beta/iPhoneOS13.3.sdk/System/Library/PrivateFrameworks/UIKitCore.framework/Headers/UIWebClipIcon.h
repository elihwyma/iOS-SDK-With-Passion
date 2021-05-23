/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSURL;

@interface UIWebClipIcon : NSObject

{
    _Bool _precomposed;
    _Bool _siteWide;
    struct CGSize _bestSize;
    NSURL *_url;
}

@property (nonatomic, getter=isPrecomposed) _Bool precomposed;
@property (nonatomic, getter=isSiteWide) _Bool siteWide;
@property (nonatomic) struct CGSize bestSize;
@property (retain, nonatomic) NSURL *url;

- (long long)compare:(id)arg1 preferringDeviceIconSizes:(_Bool)arg2;

@end
