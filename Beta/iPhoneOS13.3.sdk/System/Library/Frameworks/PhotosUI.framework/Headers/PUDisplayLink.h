/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class CADisplayLink;

@interface PUDisplayLink : NSObject

{
    CDUnknownBlockType _updateHandler;
    CDUnknownBlockType _completionHandler;
    CADisplayLink *_displayLink;
}

@property (copy, nonatomic) CDUnknownBlockType updateHandler;
@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (retain, nonatomic) CADisplayLink *displayLink;

- (void)stop;
- (void)start;
- (void)_update:(id)arg1;
- (id)initWithUpdateHandler:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
