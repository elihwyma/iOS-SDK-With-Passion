/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

@class ARDisplayLink;

@interface _ARDisplayLinkHelper : NSObject

{
    ARDisplayLink *_displayLink;
}

- (void)callback:(id)arg1;
- (id)initWithDisplayLink:(id)arg1;

@end
