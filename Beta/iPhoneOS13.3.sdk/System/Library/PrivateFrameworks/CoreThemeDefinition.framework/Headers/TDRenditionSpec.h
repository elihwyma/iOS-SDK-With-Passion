/*
 Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

#import <CoreData/NSManagedObject.h>

@class NSDate, NSSet, TDElementProduction, TDRenditionKeySpec, TDRenditionType;

@interface TDRenditionSpec : NSManagedObject

@property (retain, nonatomic) NSDate *dateOfLastChange;
@property (nonatomic) int width;
@property (nonatomic) int height;
@property (nonatomic) _Bool opaque;
@property (nonatomic) _Bool monochrome;
@property (nonatomic) int packedPointX;
@property (nonatomic) int packedPointY;
@property (nonatomic) _Bool alphaCrop;
@property (retain, nonatomic) TDRenditionKeySpec *keySpec;
@property (retain, nonatomic) NSSet *packedRenditions;
@property (retain, nonatomic) TDElementProduction *production;
@property (retain, nonatomic) TDRenditionType *renditionType;
@property (retain, nonatomic) TDRenditionSpec *parentRendition;
@property (retain, nonatomic) NSSet *properties;
@property (nonatomic) struct CGPoint packedPoint;

- (id)propertiesAsDictionary;
- (void)awakeFromInsert;
- (id)createCSIRepresentationWithCompression:(_Bool)arg1 colorSpaceID:(unsigned long long)arg2 document:(id)arg3;
- (_Bool)updatePackingPropertiesWithDocument:(id)arg1;
- (_Bool)canBePackedWithDocument:(id)arg1;
- (void)resetToBaseKeySpec;
- (void)drawPackableRenditionInContext:(struct CGContext *)arg1 withDocument:(id)arg2;

@end
