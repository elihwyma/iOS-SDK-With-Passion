/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <UIKit/UIView.h>

__attribute__((visibility("hidden")))
@interface WKLayerHostView : UIView

@property (nonatomic) unsigned int contextID;

+ (Class)layerClass;

- (id)layerHost;

@end
