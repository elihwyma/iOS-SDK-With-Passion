/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

@class ARPresentation;

@interface ARPresentationDisplayLinkHelper : NSObject

{
    ARPresentation *_arpresentation;
}

- (void)callback:(id)arg1;
- (id)initWithARPresentation:(id)arg1;

@end
