/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UITextPosition.h>

@class WebVisiblePosition;

__attribute__((visibility("hidden")))
@interface UITextPositionImpl : UITextPosition

{
    WebVisiblePosition *_webVisiblePosition;
}

@property (retain, nonatomic) WebVisiblePosition *webVisiblePosition;

+ (id)wrapWebVisiblePosition:(id)arg1;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)description;

@end
