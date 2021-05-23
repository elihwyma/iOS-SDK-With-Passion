/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <ContentKit/WFContentItem.h>

@class CLLocation, MKMapItem;

@interface WFMKMapItemContentItem : WFContentItem

{
    CLLocation *_queryLocation;
}

@property (retain, nonatomic) CLLocation *queryLocation;
@property (nonatomic, readonly) MKMapItem *mapItem;

+ (id)typeDescription;
+ (id)ownedTypes;
+ (id)outputTypes;
+ (id)contentCategories;
+ (id)pluralTypeDescription;
+ (id)countDescription;
+ (_Bool)supportedTypeMustBeDeterminedByInstance:(id)arg1;
+ (id)itemWithMapItem:(id)arg1 fromQueryLocation:(id)arg2;

- (_Bool)getListSubtitle:(CDUnknownBlockType)arg1;
- (_Bool)getListAltText:(CDUnknownBlockType)arg1;
- (void)generateObjectRepresentations:(CDUnknownBlockType)arg1 options:(id)arg2 forClass:(Class)arg3;
- (_Bool)canGenerateRepresentationForType:(id)arg1;

@end
