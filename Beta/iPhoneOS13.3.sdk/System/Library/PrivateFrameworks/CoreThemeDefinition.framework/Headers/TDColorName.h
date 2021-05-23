/*
 Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

#import <CoreData/NSManagedObject.h>

@class NSNumber, NSSet, NSString;

@interface TDColorName : NSManagedObject

@property (retain, nonatomic) NSString *colorDescription;
@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSString *illustrationURL;
@property (retain, nonatomic) NSNumber *isExcludedFromFilter;
@property (retain, nonatomic) NSString *selector;
@property (retain, nonatomic) NSSet *colorDefinitions;

@end
