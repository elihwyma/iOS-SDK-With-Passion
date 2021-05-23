/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <UIKit/UITextPosition.h>

__attribute__((visibility("hidden")))
@interface WKTextPosition : UITextPosition

{
    struct CGRect _positionRect;
}

@property (nonatomic) struct CGRect positionRect;

+ (id)textPositionWithRect:(struct CGRect)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)description;

@end
