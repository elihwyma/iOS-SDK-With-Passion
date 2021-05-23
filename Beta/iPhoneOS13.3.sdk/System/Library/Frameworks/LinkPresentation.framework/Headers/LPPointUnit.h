/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface LPPointUnit : NSObject

{
    double _value;
}

@property (nonatomic, readonly) double value;

+ (id)zero;

- (id)initWithValue:(double)arg1;
- (id)_lp_CSSText;
- (id)_lp_HTMLAttributeText;

@end
