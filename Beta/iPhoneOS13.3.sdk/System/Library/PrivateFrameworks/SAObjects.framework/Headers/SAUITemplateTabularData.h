/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAUITemplateBaseItem.h>

@class NSArray, NSNumber, NSString;

@protocol SAUITemplateItem;

@interface SAUITemplateTabularData : SAUITemplateBaseItem

@property (nonatomic) _Bool allowContentScrolling;
@property (copy, nonatomic) NSArray *columns;
@property (retain, nonatomic) id <SAUITemplateItem> footerItem;
@property (retain, nonatomic) id <SAUITemplateItem> headerItem;
@property (copy, nonatomic) NSString *layoutStyle;
@property (copy, nonatomic) NSNumber *minimumRowHeight;
@property (copy, nonatomic) NSArray *rowStyleRules;
@property (nonatomic) _Bool showHeaderDivider;

+ (id)tabularData;
+ (id)tabularDataWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
