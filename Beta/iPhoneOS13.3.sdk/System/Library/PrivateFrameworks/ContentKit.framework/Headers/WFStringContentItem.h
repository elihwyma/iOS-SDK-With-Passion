/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <ContentKit/WFGenericFileContentItem.h>

@class NSString, WFDataDetectorResults;

@interface WFStringContentItem : WFGenericFileContentItem

{
    WFDataDetectorResults *_dataDetectorResults;
}

@property (retain, nonatomic) WFDataDetectorResults *dataDetectorResults;
@property (nonatomic, readonly) NSString *string;

+ (id)typeDescription;
+ (id)ownedTypes;
+ (id)outputTypes;
+ (id)contentCategories;
+ (id)pluralTypeDescription;
+ (id)itemWithSerializedItem:(id)arg1 forType:(id)arg2 named:(id)arg3;
+ (_Bool)supportedTypeMustBeDeterminedByInstance:(id)arg1;

- (id)generateObjectRepresentationsForClass:(Class)arg1 options:(id)arg2 error:(id *)arg3;
- (void)generateObjectRepresentations:(CDUnknownBlockType)arg1 options:(id)arg2 forClass:(Class)arg3;
- (_Bool)includesFileRepresentationInSerializedItem;
- (id)internalRepresentationForCopying;
- (_Bool)canGenerateRepresentationForType:(id)arg1;
- (id)generateFileRepresentationForType:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (_Bool)isContent;
- (id)generateObjectsForClass:(Class)arg1 error:(id *)arg2;

@end
