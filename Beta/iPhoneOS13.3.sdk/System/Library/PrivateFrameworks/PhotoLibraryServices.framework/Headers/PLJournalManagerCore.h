/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSURL;

@interface PLJournalManagerCore : NSObject

{
    NSURL *_baseURL;
    NSURL *_historyTokenURL;
}

+ (id)payloadClasses;
+ (void)validatePayloadClassesForManagedObjectModel:(id)arg1;
+ (id)_populateRelationshipKeyPathsForPrefetching:(id)arg1 currentKeyPath:(id)arg2 usingModelProperties:(id)arg3;
+ (id)populateRelationshipKeyPathsForPrefetching:(id)arg1 forPayloadClass:(Class)arg2;
+ (_Bool)createSnapshotWithJournal:(id)arg1 usingManagedObjectContext:(id)arg2 error:(id *)arg3;

- (id)init;
- (id)initWithBaseURL:(id)arg1;
- (_Bool)saveHistoryToken:(id)arg1 error:(id *)arg2;

@end
