/*
 Image: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
 */

#import <Foundation/NSObject.h>

@class ASCodableCloudKitCompetitionList, ASCompetition, CKRecord, NSArray, NSString, NSUUID;

@interface ASCompetitionList : NSObject

{
    NSArray *_competitions;
    long long _type;
    NSUUID *_friendUUID;
    CKRecord *_systemFieldsOnlyRecord;
}

@property (nonatomic, readonly) ASCodableCloudKitCompetitionList *codableCompetitionList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) NSArray *competitions;
@property (nonatomic) long long type;
@property (retain, nonatomic) NSUUID *friendUUID;
@property (copy, nonatomic) CKRecord *systemFieldsOnlyRecord;
@property (nonatomic, readonly) ASCompetition *currentCompetition;

+ (id)competitionListWithCodableCompetitionList:(id)arg1;
+ (id)competitionListWithRecord:(id)arg1;
+ (id)competitionListFromCodableDatabaseCompetitionList:(id)arg1 codableCompetitions:(id)arg2 withType:(long long)arg3;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)recordWithZoneID:(id)arg1;
- (id)codableDatabaseCompetitionListEntryForOwner:(long long)arg1;
- (id)initWithFriendUUID:(id)arg1 type:(long long)arg2;

@end
