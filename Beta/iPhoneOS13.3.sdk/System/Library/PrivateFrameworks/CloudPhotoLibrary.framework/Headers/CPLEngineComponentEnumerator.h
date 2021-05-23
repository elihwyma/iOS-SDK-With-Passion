/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <NSObject.h>

@class NSEnumerator;

@interface CPLEngineComponentEnumerator : NSObject

{
    NSEnumerator *_enumerator;
    CDUnknownBlockType _handler;
}

- (id)initWithComponents:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)nextComponent;

@end
