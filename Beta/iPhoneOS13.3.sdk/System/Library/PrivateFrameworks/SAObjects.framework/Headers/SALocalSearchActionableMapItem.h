/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SALocalSearchMapItem.h>

@class NSArray;

@interface SALocalSearchActionableMapItem : SALocalSearchMapItem

@property (copy, nonatomic) NSArray *commands;

+ (id)actionableMapItem;
+ (id)actionableMapItemWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
