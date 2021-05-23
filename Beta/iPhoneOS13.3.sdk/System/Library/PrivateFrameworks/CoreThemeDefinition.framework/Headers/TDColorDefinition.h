/*
 Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

#import <CoreData/NSManagedObject.h>

@class NSDate, NSNumber, TDColorName, TDThemeLook;

@interface TDColorDefinition : NSManagedObject

@property (retain, nonatomic) NSDate *dateOfLastChange;
@property (retain, nonatomic) NSNumber *physicalColor;
@property (retain, nonatomic) NSManagedObject *colorStatus;
@property (retain, nonatomic) TDThemeLook *look;
@property (retain, nonatomic) TDColorName *name;

- (void)copyAttributesInto:(id)arg1;
- (id)copyDataFromAttributes;
- (void)setAttributesFromCopyData:(id)arg1;
- (id)dataFromAttributes;
- (void)setAttributesFromData:(id)arg1;
- (id)colorAsString;

@end
