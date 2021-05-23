/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <MapsSupport/MSPMutableHistoryEntry.h>

@class GEOMapRegion, NSDate, NSString;

@interface MSPMutableHistoryEntrySearch : MSPMutableHistoryEntry

@property (copy, nonatomic) NSString *query;
@property (copy, nonatomic) NSString *locationDisplayString;
@property (copy, nonatomic) NSString *languageCode;
@property (copy, nonatomic) GEOMapRegion *mapRegion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSDate *usageDate;
@property (nonatomic, readonly) _Bool tracksRAPReportingOnly;

+ (Class)mutableObjectClass;
+ (id)mutableObjectProtocol;
+ (Class)immutableObjectClass;
+ (id)immutableObjectProtocol;

- (id)initWithStorage:(id)arg1;
- (id)transferToImmutableIfValidWithError:(out id *)arg1;
- (_Bool)_isUserVisibleDuplicateOfSameClassObject:(id)arg1;

@end
