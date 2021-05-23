/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL;

@interface UIWebClipLinkTag : NSObject

{
    _Bool _mediaMatchesPortraitOrientation;
    _Bool _mediaMatchesLandscapeOrientation;
    NSString *_href;
    NSString *_rel;
    NSString *_sizes;
}

@property (copy, nonatomic) NSString *href;
@property (nonatomic, readonly) NSURL *hrefURL;
@property (copy, nonatomic) NSString *rel;
@property (copy, nonatomic) NSString *sizes;
@property (nonatomic) _Bool mediaMatchesPortraitOrientation;
@property (nonatomic) _Bool mediaMatchesLandscapeOrientation;

@end
