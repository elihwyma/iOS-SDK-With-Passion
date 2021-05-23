/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <Foundation/NSObject.h>

@interface SUGradientColorStop : NSObject

{
    double _r;
    double _g;
    double _b;
    double _a;
    double _offset;
    struct CGColor *_rawColor;
}

@property (nonatomic, readonly) double offset;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)dealloc;
- (id)description;
- (long long)compare:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (struct CGColor *)copyCGColor;
- (id)initWithColor:(struct CGColor *)arg1 offset:(double)arg2;

@end
