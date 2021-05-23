/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <Foundation/NSObject.h>

#import <MapsSupport/Swift-Protocol.h>

@class MSPHistoryEntryStorage, NSDate, NSString, NSUUID;

@interface MSPMutableHistoryEntry : NSObject <Swift>

{
    _Bool _immutable;
    NSUUID *_storageIdentifier;
    NSDate *_usageDate;
    MSPHistoryEntryStorage *_storage;
}

@property (nonatomic, readonly, getter=_isImmutable) _Bool immutable;
@property (nonatomic, readonly) MSPHistoryEntryStorage *storage;
@property (copy, nonatomic) NSDate *usageDate;
@property (nonatomic, getter=tracksRAPReportingOnly) _Bool tracksRAPReportingOnly;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (Class)mutableObjectClass;
+ (id)mutableObjectProtocol;
+ (Class)immutableObjectClass;
+ (id)immutableObjectProtocol;
+ (id)mutableHistoryEntryForStorage:(id)arg1;

- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)initWithStorage:(id)arg1;
- (_Bool)isFailed;
- (id)debugTitle;
- (id)storageIdentifier;
- (void)ifSearch:(CDUnknownBlockType)arg1 ifRoute:(CDUnknownBlockType)arg2 ifPlaceDisplay:(CDUnknownBlockType)arg3 ifTransitLineItem:(CDUnknownBlockType)arg4;
- (_Bool)isUserVisibleDuplicateOfEntry:(id)arg1;
- (id)transferToImmutableIfValidWithError:(out id *)arg1;
- (id)copyIfValidWithError:(out id *)arg1;
- (void)_noteWillMutate;
- (void)ifMutableSearch:(CDUnknownBlockType)arg1 ifMutableRoute:(CDUnknownBlockType)arg2 ifMutablePlaceDisplay:(CDUnknownBlockType)arg3 ifMutableTransitLineItem:(CDUnknownBlockType)arg4;
- (_Bool)_isUserVisibleDuplicateOfSameClassObject:(id)arg1;
- (void)_markImmutable;

@end
