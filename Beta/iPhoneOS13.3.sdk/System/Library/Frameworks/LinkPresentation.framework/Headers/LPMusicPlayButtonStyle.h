/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

#import <Foundation/NSObject.h>

@class LPSize, UIColor;

__attribute__((visibility("hidden")))
@interface LPMusicPlayButtonStyle : NSObject

{
    LPSize *_size;
    UIColor *_color;
}

@property (retain, nonatomic) LPSize *size;
@property (retain, nonatomic) UIColor *color;

- (id)init;

@end
