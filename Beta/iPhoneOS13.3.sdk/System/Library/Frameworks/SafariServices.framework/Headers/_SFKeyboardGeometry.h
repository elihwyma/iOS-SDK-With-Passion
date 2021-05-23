/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _SFKeyboardGeometry : NSObject

{
    struct CGSize _sizeWithoutBar;
    struct CGSize _sizeWithBar;
}

@property (nonatomic, readonly) struct CGSize sizeWithoutBar;
@property (nonatomic, readonly) struct CGSize sizeWithBar;

+ (id)keyboardGeometryForInterfaceOrientation:(long long)arg1;
+ (id)_keyboardGeometryForCurrentDeviceWithInterfaceOrientation:(long long)arg1;

- (id)_initWithSizeWithoutBar:(struct CGSize)arg1 sizeWithBar:(struct CGSize)arg2;
- (id)_initWithFallbackSizeForOrientation:(long long)arg1;

@end
