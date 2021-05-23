/*
 Image: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
 */

#import <Foundation/NSObject.h>

@class NSURL;

__attribute__((visibility("hidden")))
@interface DCCachesDirectory : NSObject

{
    NSURL *_cachesDirectoryURL;
}

@property (nonatomic, readonly) NSURL *cachesDirectoryURL;

- (id)init;

@end
