/*
 Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

#import <Foundation/NSObject.h>

@class NSURLSession;

@interface AAUIImageFetcher : NSObject

{
    NSURLSession *_urlSession;
}

+ (id)sharedImageFetcher;

- (id)_urlSession;
- (void)fetchImageAtURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
