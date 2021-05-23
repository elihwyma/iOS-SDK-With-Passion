/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <ContentKit/WFContentItem.h>

@interface WFDCMapsLinkContentItem : WFContentItem

+ (id)typeDescription;
+ (id)ownedTypes;
+ (id)outputTypes;
+ (id)contentCategories;
+ (id)pluralTypeDescription;
+ (id)countDescription;

- (void)generateObjectRepresentation:(CDUnknownBlockType)arg1 options:(id)arg2 forClass:(Class)arg3;
- (id)additionalRepresentationsForSerialization;
- (_Bool)includesFileRepresentationInSerializedItem;
- (id)mapsLink;

@end
