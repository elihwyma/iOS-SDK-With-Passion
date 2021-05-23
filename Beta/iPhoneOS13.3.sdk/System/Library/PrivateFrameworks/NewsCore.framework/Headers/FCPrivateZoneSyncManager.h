/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class CKRecordZoneID, NSArray, NSString, NTPBPrivateZoneSyncState;

@protocol FCPrivateZoneSyncManagerDelegate;

@interface FCPrivateZoneSyncManager : NSObject

{
    _Bool _requiresBatchedSync;
    CKRecordZoneID *_recordZoneID;
    id <FCPrivateZoneSyncManagerDelegate> _delegate;
    NSArray *_desiredKeys;
    NTPBPrivateZoneSyncState *_currentState;
}

@property (nonatomic, readonly) NSArray *desiredKeys;
@property (nonatomic, readonly) _Bool requiresBatchedSync;
@property (copy, nonatomic, readonly) NTPBPrivateZoneSyncState *currentState;
@property (copy, nonatomic, readonly) CKRecordZoneID *recordZoneID;
@property (weak, nonatomic) id <FCPrivateZoneSyncManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (_Bool)isDirty;
- (void)notifyObservers;
- (void)markAsDirty;
- (void)_stateDidChange;
- (_Bool)isAwaitingFirstSync;
- (void)fetchChangesWithContext:(id)arg1 qualityOfService:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithRecordZoneID:(id)arg1 desiredKeys:(id)arg2 requiresBatchedSync:(_Bool)arg3 currentState:(id)arg4;

@end
