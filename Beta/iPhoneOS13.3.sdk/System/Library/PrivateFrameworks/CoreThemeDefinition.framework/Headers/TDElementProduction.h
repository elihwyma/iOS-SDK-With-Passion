/*
 Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

#import <CoreData/NSManagedObject.h>

@class NSDate, NSNumber, NSSet, NSString, TDNamedElement, TDRenditionKeySpec, TDRenditionType, TDSchemaPartDefinition, TDThemeConstant;

@interface TDElementProduction : NSManagedObject

@property (retain, nonatomic) TDRenditionKeySpec *baseKeySpec;
@property (retain, nonatomic) TDRenditionType *renditionType;
@property (retain, nonatomic) TDThemeConstant *renditionSubtype;
@property (retain, nonatomic) TDThemeConstant *zeroCodeArtworkInfo;
@property (retain, nonatomic) NSString *comment;
@property (retain, nonatomic) NSDate *dateOfLastChange;
@property (retain, nonatomic) NSNumber *isExcludedFromFilter;
@property (retain, nonatomic) TDThemeConstant *artworkDraftType;
@property (retain, nonatomic) NSSet *renditions;
@property (retain, nonatomic) NSSet *tags;
@property (retain, nonatomic) NSString *universalTypeIdentifier;
@property (nonatomic) _Bool makeOpaqueIfPossible;
@property (retain, nonatomic) TDNamedElement *name;
@property (retain, nonatomic) TDSchemaPartDefinition *partDefinition;

- (id)relativePath;
- (id)associatedFileModificationDateWithDocument:(id)arg1;
- (id)associatedFileURLWithDocument:(id)arg1;
- (void)deleteRenditionsInDocument:(id)arg1 shouldDeleteAssetFiles:(_Bool)arg2;

@end
