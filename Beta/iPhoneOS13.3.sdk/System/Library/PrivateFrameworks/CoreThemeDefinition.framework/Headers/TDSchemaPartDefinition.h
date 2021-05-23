/*
 Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

#import <CoreData/NSManagedObject.h>

@class CUIImage, NSArray, NSSet, NSString, TDSchemaDefinition;

@interface TDSchemaPartDefinition : NSManagedObject

{
    CUIImage *previewImage;
    NSArray *renditions;
    NSArray *renditionGroups;
    unsigned long long partFeatures;
}

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *widgetID;
@property (retain, nonatomic) TDSchemaDefinition *element;
@property (retain, nonatomic) NSSet *productions;
@property (retain, nonatomic) CUIImage *previewImage;
@property (copy, nonatomic) NSArray *renditions;
@property (retain, nonatomic) NSArray *renditionGroups;
@property (nonatomic) unsigned long long partFeatures;

- (void)dealloc;
- (id)displayName;
- (id)_schema;
- (long long)elementID;
- (void)didTurnIntoFault;
- (long long)partID;
- (const CDStruct_26b2aa83 *)cuiPartDefinition;
- (void)updateDerivedRenditionData;
- (id)bestPreviewRendition;
- (id)validStatesWithDocument:(id)arg1;
- (long long)_renditionKeyValueForTokenIdentifier:(unsigned short)arg1;

@end
