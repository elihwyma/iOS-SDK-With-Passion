/*
 Image: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
 */

#import <Foundation/NSObject.h>

@class NSProgress;

__attribute__((visibility("hidden")))
@interface FPCoordinationContext : NSObject

{
    NSProgress *_progress;
    CDUnknownBlockType _completionHandler;
}

@property (nonatomic, readonly) NSProgress *progress;
@property (nonatomic, readonly) CDUnknownBlockType completionHandler;

- (id)initWithProgress:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
