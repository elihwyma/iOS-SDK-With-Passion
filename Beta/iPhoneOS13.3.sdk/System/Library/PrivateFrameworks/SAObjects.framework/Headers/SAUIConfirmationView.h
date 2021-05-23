/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAAceView.h>

@class NSArray, NSString;

@interface SAUIConfirmationView : SAAceView

@property (copy, nonatomic) NSArray *allConfirmationOptions;
@property (copy, nonatomic) NSString *cancelTrigger;
@property (copy, nonatomic) NSArray *confirmCommands;
@property (copy, nonatomic) NSString *confirmText;
@property (copy, nonatomic) NSArray *denyCommands;
@property (copy, nonatomic) NSString *denyText;
@property (copy, nonatomic) NSString *style;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *title;

+ (id)confirmationView;
+ (id)confirmationViewWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
