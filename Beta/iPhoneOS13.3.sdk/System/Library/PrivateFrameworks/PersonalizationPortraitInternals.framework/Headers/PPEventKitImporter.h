/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <Foundation/NSObject.h>

@class PPLocalEventStore, PPLocalLocationStore, PPLocalNamedEntityStore, SGDataDetectorDissector, SGNamedEntityDissector, SGSqlEntityStore, SGURLDissector;

@interface PPEventKitImporter : NSObject

{
    PPLocalEventStore *_eventStore;
    PPLocalNamedEntityStore *_namedEntityStore;
    PPLocalLocationStore *_locationStore;
    SGSqlEntityStore *_urlStore;
    SGURLDissector *_urlDissector;
    SGNamedEntityDissector *_neDissector;
    SGDataDetectorDissector *_ddDissector;
    struct atomic_flag _fullImportInProgress;
}

+ (id)defaultInstance;
+ (_Bool)_shouldImport;

- (id)init;
- (_Bool)_flush;
- (id)initWithEventStore:(id)arg1 namedEntityStore:(id)arg2 locationStore:(id)arg3 urlStore:(id)arg4 urlDissector:(id)arg5 namedEntityDissector:(id)arg6 dataDetectorDissector:(id)arg7;
- (_Bool)_setDissectorsFromPipeline;
- (void)importEventData;
- (void)importEventDataWithShouldContinueBlock:(CDUnknownBlockType)arg1;
- (void)importEvent:(id)arg1;
- (void)_importEvent:(id)arg1;
- (void)_donateEntitiesForPropertiesOfEvent:(id)arg1 source:(id)arg2;
- (id)_entitiesFromPropertiesOfEvent:(id)arg1;
- (void)_dissectAndDonateEntitiesFromRawTextOfEvent:(id)arg1 source:(id)arg2;
- (void)_donateLocationFromPreferredLocationOfEvent:(id)arg1 source:(id)arg2;
- (void)_dissectAndDonateURLsFromEvent:(id)arg1 source:(id)arg2;
- (void)_donateURLContainer:(id)arg1;
- (void)_donateEntityContainer:(id)arg1;
- (_Bool)deleteAllExtractions;
- (_Bool)_deleteOldEntities;
- (_Bool)_deleteOldLocations;

@end
