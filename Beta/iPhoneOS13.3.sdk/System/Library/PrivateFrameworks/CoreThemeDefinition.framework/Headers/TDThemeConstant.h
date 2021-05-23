/*
 Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

#import <CoreData/NSManagedObject.h>

@interface TDThemeConstant : NSManagedObject

{
    int _identifier;
}

- (id)debugDescription;
- (unsigned int)identifier;
- (void)setIdentifier:(unsigned int)arg1;
- (id)displayName;
- (void)setDisplayName:(id)arg1;
- (id)copyDataFromAttributes;
- (void)setAttributesFromCopyData:(id)arg1;
- (id)constantName;
- (void)setConstantName:(id)arg1;

@end
