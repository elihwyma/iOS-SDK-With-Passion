/*
 Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <Foundation/NSObject.h>

@class CALayer, NSString;

__attribute__((visibility("hidden")))
@interface CAStateControllerAnimation : NSObject

{
    CALayer *_layer;
    NSString *_key;
}

@property (nonatomic, readonly) CALayer *layer;
@property (nonatomic, readonly) NSString *key;

- (void)dealloc;
- (id)initWithLayer:(id)arg1 key:(id)arg2;

@end
