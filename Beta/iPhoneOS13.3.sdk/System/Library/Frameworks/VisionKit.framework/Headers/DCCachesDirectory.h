/*
 Image: /System/Library/Frameworks/VisionKit.framework/VisionKit
 */

#import <Foundation/NSObject.h>

@class NSURL;

__attribute__((visibility("hidden")))
@interface DCCachesDirectory : NSObject

{
    NSURL *_cachesDirectoryURL;
}

@property (nonatomic, readonly) NSURL *cachesDirectoryURL;

+ (id)sharedCachesDirectory;

- (id)init;

@end
