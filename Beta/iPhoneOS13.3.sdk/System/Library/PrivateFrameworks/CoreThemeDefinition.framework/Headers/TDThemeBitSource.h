/*
 Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

#import <CoreData/NSManagedObject.h>

@class NSSet, NSString;

@interface TDThemeBitSource : NSManagedObject

@property (retain, nonatomic) NSString *path;
@property (retain, nonatomic) NSSet *assets;

- (id)name;
- (void)setName:(id)arg1;
- (id)fileURLWithDocument:(id)arg1;

@end
