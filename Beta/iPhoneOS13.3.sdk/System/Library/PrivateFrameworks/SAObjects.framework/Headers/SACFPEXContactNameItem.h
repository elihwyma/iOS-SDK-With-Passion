/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SACFPEXItem.h>

@class SAPerson;

@interface SACFPEXContactNameItem : SACFPEXItem

@property (retain, nonatomic) SAPerson *person;

+ (id)contactNameItem;
+ (id)contactNameItemWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
