/*
 Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

#import <CoreData/NSManagedObject.h>

@class NSDate, NSNumber, TDMetafontSizeSelector;

@interface TDFontSizeDefinition : NSManagedObject

@property (retain, nonatomic) NSDate *dateOfLastChange;
@property (retain, nonatomic) NSNumber *pointSize;
@property (retain, nonatomic) TDMetafontSizeSelector *selector;

@end
