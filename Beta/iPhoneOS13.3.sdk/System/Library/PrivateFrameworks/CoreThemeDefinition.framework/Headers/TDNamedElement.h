/*
 Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

#import <CoreData/NSManagedObject.h>

@class NSDate, NSNumber, NSString, TDElementProduction;

@interface TDNamedElement : NSManagedObject

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSDate *dateOfLastChange;
@property (retain, nonatomic) NSNumber *identifier;
@property (retain, nonatomic) TDElementProduction *production;

@end
