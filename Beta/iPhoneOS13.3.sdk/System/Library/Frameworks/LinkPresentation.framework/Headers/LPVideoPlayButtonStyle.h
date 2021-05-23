/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

#import <Foundation/NSObject.h>

@class LPSize;

__attribute__((visibility("hidden")))
@interface LPVideoPlayButtonStyle : NSObject

{
    LPSize *_size;
    LPSize *_backgroundSize;
    double _disabledOpacity;
}

@property (retain, nonatomic) LPSize *size;
@property (retain, nonatomic) LPSize *backgroundSize;
@property (nonatomic) double disabledOpacity;

- (id)init;

@end
