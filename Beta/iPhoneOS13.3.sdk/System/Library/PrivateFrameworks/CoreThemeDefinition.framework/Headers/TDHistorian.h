/*
 Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

#import <Foundation/NSObject.h>

@class CoreThemeDocument;

@interface TDHistorian : NSObject

{
    CoreThemeDocument *document;
}

- (id)initWithDocument:(id)arg1;
- (void)updateEntriesForManagedObjects:(id)arg1;
- (void)_updateEntryForManagedObject:(id)arg1;
- (id)_updateRecordsWithName:(id)arg1 sinceDate:(id)arg2;
- (_Bool)foundDataChangesSinceDate:(id)arg1;
- (id)productionsWithModifiedAssets;
- (id)productionsChangedSinceDate:(id)arg1 uuidNeedsReset:(_Bool *)arg2;
- (id)colorsChangedSinceDate:(id)arg1;
- (id)fontsChangedSinceDate:(id)arg1;
- (id)fontSizesChangedSinceDate:(id)arg1;
- (id)namedElementsChangedSinceDate:(id)arg1;
- (id)facetDefinitionsChangedSinceDate:(id)arg1;
- (id)keySpecsForRenditionsRemovedSinceDate:(id)arg1;

@end
