/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

#import <Foundation/NSObject.h>

@class NSString, UIColor;

@interface LPImageProperties : NSObject

{
    NSString *_accessibilityText;
    long long _type;
    UIColor *_overlaidTextColor;
}

@property (copy, nonatomic) NSString *accessibilityText;
@property (nonatomic) long long type;
@property (retain, nonatomic) UIColor *overlaidTextColor;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
