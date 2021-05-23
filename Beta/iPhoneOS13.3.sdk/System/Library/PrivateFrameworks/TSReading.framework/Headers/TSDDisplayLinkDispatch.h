/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, TSDDisplayLink;

@interface TSDDisplayLinkDispatch : NSObject

{
    TSDDisplayLink *_displayLink;
    NSMutableArray *_blocks;
}

- (void)teardown;
- (void)performBlockNextFrame:(CDUnknownBlockType)arg1;

@end
