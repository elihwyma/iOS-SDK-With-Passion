/*
 Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

#import <Foundation/NSObject.h>

#import <CoreUI/Swift-Protocol.h>

@interface CUIColor : NSObject <Swift>

{
    struct CGColor *_cgColor;
}

@property (nonatomic, readonly) struct CGColor *CGColor;

+ (id)colorWithCGColor:(struct CGColor *)arg1;
+ (id)colorWithCIColor:(id)arg1;

- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCGColor:(struct CGColor *)arg1;
- (id)initWithCIColor:(id)arg1;
- (id)colorUsingCGColorSpace:(struct CGColorSpace *)arg1;

@end
