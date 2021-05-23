/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <ContentKit/WFContentItem.h>

@interface WFLocationContentItem : WFContentItem

+ (id)typeDescription;
+ (id)propertyBuilders;
+ (id)ownedTypes;
+ (id)outputTypes;
+ (id)contentCategories;
+ (id)pluralTypeDescription;
+ (id)countDescription;

- (_Bool)getListSubtitle:(CDUnknownBlockType)arg1;
- (_Bool)getListAltText:(CDUnknownBlockType)arg1;
- (void)generateObjectRepresentations:(CDUnknownBlockType)arg1 options:(id)arg2 forClass:(Class)arg3;
- (void)generateFileRepresentation:(CDUnknownBlockType)arg1 options:(id)arg2 forType:(id)arg3;
- (_Bool)includesFileRepresentationInSerializedItem;
- (id)preferredFileType;
- (void)getMKMapSnapshotImageForSize:(struct CGSize)arg1 scale:(double)arg2 named:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;

@end
