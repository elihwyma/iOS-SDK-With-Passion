/*
 Image: /System/Library/Frameworks/WatchKit.framework/WatchKit
 */

#import <Foundation/NSObject.h>

@class UIColor;

@interface SPColorWrapper : NSObject

{
    UIColor *_color;
}

@property (nonatomic, readonly) UIColor *color;

+ (_Bool)supportsSecureCoding;
+ (id)wrapperForColor:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
