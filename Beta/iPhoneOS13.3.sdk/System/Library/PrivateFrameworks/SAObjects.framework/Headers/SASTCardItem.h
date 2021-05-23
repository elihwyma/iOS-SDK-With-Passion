/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSString, SAUIColor, SAUIDecoratedText;

@interface SASTCardItem : AceObject <Swift>

@property (retain, nonatomic) SAUIColor *backgroundColor;
@property (retain, nonatomic) SAUIDecoratedText *footnote;
@property (retain, nonatomic) SAUIDecoratedText *label;
@property (retain, nonatomic) SAUIColor *labelTextColor;
@property (retain, nonatomic) SAUIDecoratedText *title;
@property (retain, nonatomic) SAUIColor *titleBackgroundColor;
@property (retain, nonatomic) SAUIColor *titleTextColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)cardItem;
+ (id)cardItemWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
