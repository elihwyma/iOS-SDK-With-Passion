/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLManagedObject.h>

#import <PhotoLibraryServices/Swift-Protocol.h>

@class NSArray, NSDate, NSObject, NSSet, NSString;

@protocol NSCopying;

@interface PLMomentList : PLManagedObject <Swift>

@property (nonatomic) short granularityLevel;
@property (nonatomic) int sortIndex;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *representativeDate;
@property (retain, nonatomic) NSDate *endDate;
@property (retain, nonatomic) NSSet *momentsForMegaMoment;
@property (retain, nonatomic) NSSet *momentsForYear;
@property (retain, nonatomic) NSString *uuid;
@property (nonatomic, readonly) NSString *localizedTitle;
@property (nonatomic, readonly) NSArray *localizedLocationNames;
@property (nonatomic, readonly) NSSet *moments;
@property (nonatomic, readonly) NSArray *sortedMoments;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long containersCount;
@property (retain, nonatomic, readonly) NSObject<NSCopying> *uniqueObjectID;
@property (retain, nonatomic, readonly) NSArray *batchedMoments;
@property (retain, nonatomic, readonly) NSString *momentListDebugDescription;
@property (retain, nonatomic, readonly) NSString *title;

+ (id)entityName;
+ (id)descriptionForGranularityLevel:(short)arg1;
+ (id)allMomentListsInLibrary:(id)arg1 forLevel:(short)arg2 returnsObjectsAsFaults:(_Bool)arg3;
+ (id)allMomentListsInLibrary:(id)arg1 forLevel:(short)arg2;
+ (id)allMomentListsInManagedObjectContext:(id)arg1 forLevel:(short)arg2 error:(id *)arg3 returnsObjectsAsFaults:(_Bool)arg4;
+ (id)allMomentListsInManagedObjectContext:(id)arg1 forLevel:(short)arg2 error:(id *)arg3;
+ (id)yearMomentListForYear:(long long)arg1 inManagedObjectContext:(id)arg2;
+ (id)monthMomentListForMonth:(long long)arg1 year:(long long)arg2 inManagedObjectContext:(id)arg3;
+ (id)_findMomentListForGranularity:(short)arg1 sortIndex:(int)arg2 inManagedObjectContext:(id)arg3;

- (void)dealloc;
- (_Bool)isEmpty;
- (id)_typeDescription;
- (void)delete;
- (void)didTurnIntoFault;
- (void)awakeFromInsert;
- (_Bool)supportsDiagnosticInformation;
- (id)diagnosticInformation;
- (id)containers;
- (_Bool)canEditContainers;
- (id)containersRelationshipName;
- (void)addMoments:(id)arg1;
- (id)pl_debugDescription;
- (void)_performMomentChangesForKey:(id)arg1 mutation:(unsigned long long)arg2 primitiveMoments:(id)arg3 changedMoment:(id)arg4;
- (void)_performMomentChangesForKey:(id)arg1 mutation:(unsigned long long)arg2 primitiveMoments:(id)arg3 changedMoments:(id)arg4;
- (void)insertMomentForMegaMoment:(id)arg1;
- (void)removeMomentForMegaMoment:(id)arg1;
- (void)insertMomentForYear:(id)arg1;
- (void)removeMomentForYear:(id)arg1;
- (void)_updateStartAndEndDate;
- (void)removeMoments:(id)arg1;
- (void)_performMutation:(unsigned long long)arg1 withMoments:(id)arg2 forMomentListLevel:(short)arg3;
- (id)_batchedMomentsPredicate;

@end
