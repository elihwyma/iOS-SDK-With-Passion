/*
 Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

#import <CoreData/NSManagedObject.h>

@class NSString;

@interface TDProperty : NSManagedObject

{
    NSString *_name;
}

@property (copy, nonatomic) NSString *name;

- (void)dealloc;
- (void)addToDictionary:(id)arg1;

@end
