/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <UIKit/UIKBScreenTraits.h>

__attribute__((visibility("hidden")))
@interface SFKBScreenTraits : UIKBScreenTraits

{
    _Bool _sf_isKeyboardMinorEdgeWidth;
}

@property (nonatomic) _Bool sf_isKeyboardMinorEdgeWidth;

+ (id)traitsWithScreen:(id)arg1 orientation:(long long)arg2;

- (_Bool)isKeyboardMinorEdgeWidth;

@end
