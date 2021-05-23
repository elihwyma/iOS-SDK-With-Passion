/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface MFComposeTextStyle : NSObject

{
    NSString *_imageName;
    NSString *_accessibilityIdenitifier;
    SEL _editSelector;
    long long _styleType;
}

@property (copy, nonatomic, readonly) NSString *imageName;
@property (copy, nonatomic, readonly) NSString *accessibilityIdenitifier;
@property (nonatomic, readonly) SEL editSelector;
@property (nonatomic, readonly) long long styleType;

+ (id)accessibilityIdenitifierForTextStyleType:(long long)arg1;
+ (id)imageNameForTextStyleType:(long long)arg1;
+ (id)composeTextStyleForTextStyleType:(long long)arg1;
+ (_Bool)isTextListStyleOrdered:(id)arg1;
+ (SEL)editSelectorForTextStyleType:(long long)arg1;

- (id)initWithTextStyleType:(long long)arg1;

@end
