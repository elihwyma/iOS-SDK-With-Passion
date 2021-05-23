/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <Foundation/NSObject.h>

@class PKTiledCanvasView;

@interface PKTiledCanvasViewDisplayLinkDelegate : NSObject

{
    PKTiledCanvasView *_view;
}

@property (weak, nonatomic) PKTiledCanvasView *view;

- (void)display:(id)arg1;

@end
