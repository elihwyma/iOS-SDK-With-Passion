/*
 Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

#import <CoreData/NSManagedObject.h>

@class NSNumber, NSString, TDFontSizeDefinition, TDThemeSize;

@interface TDMetafontSizeSelector : NSManagedObject

@property (retain, nonatomic) NSNumber *identifier;
@property (retain, nonatomic) NSString *selectorName;
@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) TDThemeSize *controlSize;
@property (retain, nonatomic) TDFontSizeDefinition *definition;

@end
