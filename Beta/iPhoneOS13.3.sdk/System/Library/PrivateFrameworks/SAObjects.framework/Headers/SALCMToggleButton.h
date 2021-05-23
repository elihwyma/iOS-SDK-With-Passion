/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAAceView.h>

@class NSDictionary, NSString, SABaseCommand;

@interface SALCMToggleButton : SAAceView

@property (retain, nonatomic) SABaseCommand *commandToToggleToOffMode;
@property (retain, nonatomic) SABaseCommand *commandToToggleToOnMode;
@property (copy, nonatomic) NSDictionary *offIconDynamicImage;
@property (copy, nonatomic) NSString *offTitle;
@property (copy, nonatomic) NSDictionary *onIconDynamicImage;
@property (copy, nonatomic) NSString *onTitle;

+ (id)toggleButton;
+ (id)toggleButtonWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
