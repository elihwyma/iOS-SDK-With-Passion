/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAAceView.h>

@class NSArray, NSString, NSURL;

@interface SAUIMenuItem : SAAceView

@property (copy, nonatomic) NSArray *commands;
@property (copy, nonatomic) NSURL *icon;
@property (copy, nonatomic) NSURL *ref;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *title;

+ (id)menuItem;
+ (id)menuItemWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
