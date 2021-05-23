/*
 Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

#import <CoreData/NSManagedObject.h>

@class NSDate, NSNumber, NSString, TDMetafontSelector;

@interface TDFontDefinition : NSManagedObject

@property (retain, nonatomic) NSNumber *baselineOffset;
@property (retain, nonatomic) NSDate *dateOfLastChange;
@property (retain, nonatomic) NSString *postscriptName;
@property (retain, nonatomic) TDMetafontSelector *selector;

@end
