/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAUITemplateBaseItem.h>

@class NSArray;

@interface SAUITemplateCollectionView : SAUITemplateBaseItem

@property (copy, nonatomic) NSArray *cells;

+ (id)collectionView;
+ (id)collectionViewWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
