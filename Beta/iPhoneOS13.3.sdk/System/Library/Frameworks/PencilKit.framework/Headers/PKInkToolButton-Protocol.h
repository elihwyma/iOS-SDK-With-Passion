/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

@class NSString, UIColor;

@protocol PKInkToolButton

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) UIColor *color;
@property (nonatomic) unsigned long long sizeState;
@property (nonatomic) _Bool isUsedOnDarkBackground;
@property (nonatomic) unsigned long long attributeSet;

+ (unsigned short)buttonWithIdentifier:color:sizeState: /* Error: Ran out of types for this method. */;

- (unsigned short)initWithIdentifier:color:sizeState: /* Error: Ran out of types for this method. */;
- (unsigned short)sizeThatFits:sizeState: /* Error: Ran out of types for this method. */;
- (unsigned short)setColor:animated: /* Error: Ran out of types for this method. */;

@end
