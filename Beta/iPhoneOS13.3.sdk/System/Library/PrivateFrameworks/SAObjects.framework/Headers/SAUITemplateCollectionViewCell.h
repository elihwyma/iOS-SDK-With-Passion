/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAUITemplateBaseItem.h>

@class NSArray, NSString;

@interface SAUITemplateCollectionViewCell : SAUITemplateBaseItem

@property (copy, nonatomic) NSArray *monogramName;
@property (nonatomic) _Bool sizeToFitImage;
@property (copy, nonatomic) NSString *subtitleText;
@property (copy, nonatomic) NSArray *themeImages;
@property (copy, nonatomic) NSString *titleText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)collectionViewCell;
+ (id)collectionViewCellWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
