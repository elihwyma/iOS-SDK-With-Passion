/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSProgress;

@interface PLProgressFollower : NSObject

{
    NSProgress *_sourceProgress;
    CDUnknownBlockType _progressHandler;
    NSProgress *_outputProgress;
}

@property (retain) NSProgress *outputProgress;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithSourceProgress:(id)arg1 progressHandler:(CDUnknownBlockType)arg2;

@end
