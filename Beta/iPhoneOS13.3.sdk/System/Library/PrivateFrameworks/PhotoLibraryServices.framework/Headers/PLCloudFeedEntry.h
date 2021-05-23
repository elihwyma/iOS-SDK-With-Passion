/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSDate, NSNumber, NSString, NSURL;

@interface PLCloudFeedEntry : PLManagedObject

@property (retain, nonatomic) NSDate *entryDate;
@property (retain, nonatomic) NSNumber *entryTypeNumber;
@property (retain, nonatomic) NSNumber *entryPriorityNumber;
@property (retain, nonatomic) NSString *entryAlbumGUID;
@property (retain, nonatomic) NSString *entryInvitationRecordGUID;
@property (weak, nonatomic, readonly) NSURL *URIRepresentation;
@property (nonatomic, readonly) long long entryType;
@property (nonatomic, readonly) long long entryPriority;

+ (id)entityName;
+ (id)entriesSortDescriptorsAscending:(_Bool)arg1;
+ (id)allEntriesInLibrary:(id)arg1;
+ (id)notificationPredicateForFilter:(long long)arg1;
+ (id)filterPredicateForFilter:(long long)arg1;
+ (id)additionalPrediateForFilter:(long long)arg1;
+ (id)entityForFilter:(long long)arg1 inManagedObjectContext:(id)arg2;
+ (id)recentEntriesInLibrary:(id)arg1 earliestDate:(id)arg2 latestDate:(id)arg3 limit:(long long)arg4 filter:(long long)arg5 sortDescriptors:(id)arg6;
+ (id)_recentEntriesInLibrary:(id)arg1 forEntity:(id)arg2 usingPredicate:(id)arg3 earliestDate:(id)arg4 latestDate:(id)arg5 limit:(long long)arg6 sortDescriptors:(id)arg7;
+ (id)recentAssetsEntriesInLibrary:(id)arg1 limit:(long long)arg2;
+ (id)firstEntryWithType:(long long)arg1 albumGUID:(id)arg2 inLibrary:(id)arg3;
+ (id)allEntriesInManagedObjectContext:(id)arg1;
+ (id)entryWithURIRepresentation:(id)arg1 inLibrary:(id)arg2;

- (_Bool)shouldBeRemovedFromPhotoLibrary:(id)arg1;

@end
