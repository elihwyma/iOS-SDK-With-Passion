/*
 Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

#import <Foundation/NSObject.h>

@class NSURL, NSURLSession, NSURLSessionDataTask;

@interface RUIImageLoad : NSObject

{
    NSURLSession *_urlSession;
    NSURLSessionDataTask *_dataTask;
    NSURL *_URL;
}

@property (copy, nonatomic) NSURL *URL;

- (void)dealloc;
- (void)start;
- (_Bool)receivedValidResponse:(id)arg1;

@end
