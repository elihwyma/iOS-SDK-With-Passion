/*
 Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

#import <Foundation/NSProgress.h>

@class FPProgressProxy;

__attribute__((visibility("hidden")))
@interface _FPParentProgress : NSProgress

{
    FPProgressProxy *_progressProxy;
}

@property (readonly) FPProgressProxy *progressProxy;

- (void)setProgressProxy:(id)arg1;

@end
