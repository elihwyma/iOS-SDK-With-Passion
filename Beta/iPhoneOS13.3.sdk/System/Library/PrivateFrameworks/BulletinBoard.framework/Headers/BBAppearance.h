/*
 Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import <Foundation/NSObject.h>

@class BBColor, BBImage, NSString;

@interface BBAppearance : NSObject

{
    NSString *_title;
    BBColor *_titleColor;
    BBImage *_image;
    BBColor *_color;
    long long _style;
    NSString *_viewClassName;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) BBColor *titleColor;
@property (copy, nonatomic) BBImage *image;
@property (copy, nonatomic) BBColor *color;
@property (nonatomic) long long style;
@property (copy, nonatomic) NSString *viewClassName;

+ (_Bool)supportsSecureCoding;
+ (id)appearanceWithTitle:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)replacementObjectForCoder:(id)arg1;
- (id)awakeAfterUsingCoder:(id)arg1;

@end
