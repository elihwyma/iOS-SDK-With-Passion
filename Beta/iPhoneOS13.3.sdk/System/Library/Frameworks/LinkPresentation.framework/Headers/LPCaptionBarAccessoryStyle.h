/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

#import <Foundation/NSObject.h>

@class LPPadding;

__attribute__((visibility("hidden")))
@interface LPCaptionBarAccessoryStyle : NSObject

{
    LPPadding *_margin;
}

@property (retain, nonatomic, readonly) LPPadding *margin;

- (id)init;

@end
