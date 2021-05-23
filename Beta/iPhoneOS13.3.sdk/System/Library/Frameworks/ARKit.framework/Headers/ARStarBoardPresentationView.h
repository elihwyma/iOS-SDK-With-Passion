/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <UIKit/UIView.h>

@class CAMetalLayer;

@interface ARStarBoardPresentationView : UIView

@property (nonatomic, readonly) CAMetalLayer *metalLayer;

+ (Class)layerClass;

- (id)initWithFrame:(struct CGRect)arg1;

@end
