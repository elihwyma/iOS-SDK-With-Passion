/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class NSURL;

@interface VUIBootURLController : NSObject

{
    NSURL *_localAppURL;
}

@property (retain, nonatomic) NSURL *localAppURL;

- (id)init;
- (id)initWithLocalAppURL:(id)arg1;
- (void)fetchBootURLWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
