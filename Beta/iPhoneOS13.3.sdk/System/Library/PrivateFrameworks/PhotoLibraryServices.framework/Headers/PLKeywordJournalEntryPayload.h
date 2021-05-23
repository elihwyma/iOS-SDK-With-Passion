/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLJournalEntryPayload.h>

@class NSString;

@interface PLKeywordJournalEntryPayload : PLJournalEntryPayload

@property (nonatomic, readonly) NSString *title;

+ (id)modelPropertiesDescription;
+ (id)nonPersistedModelPropertiesDescription;
+ (id)modelProperties;
+ (id)payloadClassID;
+ (unsigned int)payloadVersion;
+ (unsigned int)minimumSnapshotPayloadVersion;

- (id)insertKeywordFromDataInManagedObjectContext:(id)arg1;

@end
