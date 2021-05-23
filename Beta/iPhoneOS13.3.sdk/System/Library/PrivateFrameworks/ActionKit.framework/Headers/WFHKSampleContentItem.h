/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ContentKit/WFContentItem.h>

@interface WFHKSampleContentItem : WFContentItem

+ (id)typeDescription;
+ (id)propertyBuilders;
+ (id)ownedTypes;
+ (id)outputTypes;
+ (id)contentCategories;
+ (id)pluralTypeDescription;
+ (id)countDescription;
+ (_Bool)supportedTypeMustBeDeterminedByInstance:(id)arg1;
+ (id)filterDescription;
+ (id)pluralFilterDescription;
+ (_Bool)hasLibrary;
+ (void)runQuery:(id)arg1 withItems:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (id)itemWithQuantitySample:(id)arg1;
+ (id)itemWithQuantitySample:(id)arg1 unit:(id)arg2;
+ (id)itemWithQuantitySamples:(id)arg1;
+ (id)itemWithQuantitySamples:(id)arg1 unit:(id)arg2;

- (id)unit;
- (id)startDate;
- (id)endDate;
- (id)duration;
- (id)sourceName;
- (id)quantitySample;
- (_Bool)getListAltText:(CDUnknownBlockType)arg1;
- (void)generateObjectRepresentations:(CDUnknownBlockType)arg1 options:(id)arg2 forClass:(Class)arg3;
- (_Bool)canGenerateRepresentationForType:(id)arg1;
- (id)quantitySampleContainer;
- (id)readableTypeIdentifier;
- (id)sampleValue;
- (id)categorySampleValue;
- (id)categorySample;

@end
