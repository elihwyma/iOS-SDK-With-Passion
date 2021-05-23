/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSString;

@interface PKColor : NSObject <Swift>

{
    double _red;
    double _green;
    double _blue;
    double _alpha;
    struct CGColor *_colorRef;
}

@property (weak, nonatomic, readonly) NSString *string;
@property (nonatomic, readonly) unsigned long long hash;
@property (nonatomic, readonly) struct CGColor *CGColor;

+ (_Bool)supportsSecureCoding;
+ (id)colorFromString:(id)arg1;
+ (id)colorWithR:(double)arg1 G:(double)arg2 B:(double)arg3 A:(double)arg4;
+ (id)colorWithH:(double)arg1 S:(double)arg2 B:(double)arg3 A:(double)arg4;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (double)luminance;
- (struct CGColor *)_newCGColor;

@end
