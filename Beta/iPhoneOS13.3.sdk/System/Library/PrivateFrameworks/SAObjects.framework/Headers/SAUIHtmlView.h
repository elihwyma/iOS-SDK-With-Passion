/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAAceView.h>

@class NSArray, NSString;

@interface SAUIHtmlView : SAAceView

@property (copy, nonatomic) NSArray *commands;
@property (copy, nonatomic) NSString *descriptionText;
@property (copy, nonatomic) NSString *html;

+ (id)htmlView;
+ (id)htmlViewWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
