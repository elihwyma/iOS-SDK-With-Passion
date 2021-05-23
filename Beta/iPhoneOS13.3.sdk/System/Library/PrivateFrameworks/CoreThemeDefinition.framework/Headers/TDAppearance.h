/*
 Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

#import <CoreData/NSManagedObject.h>

@class NSString;

@interface TDAppearance : NSManagedObject

{
    NSString *_name;
    unsigned short _identifier;
}

@property (copy, nonatomic) NSString *name;
@property (nonatomic) unsigned short identifier;

@end
