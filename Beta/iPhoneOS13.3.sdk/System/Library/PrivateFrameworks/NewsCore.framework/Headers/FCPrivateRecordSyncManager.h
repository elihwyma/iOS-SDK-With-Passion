/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class CKRecordID, NSArray, NSString, NTPBPrivateRecordSyncState;

@protocol FCPrivateRecordSyncManagerDelegate;

@interface FCPrivateRecordSyncManager : NSObject

{
    CKRecordID *_recordID;
    id <FCPrivateRecordSyncManagerDelegate> _delegate;
    NSArray *_desiredKeys;
    NTPBPrivateRecordSyncState *_currentState;
}

@property (nonatomic, readonly) NSArray *desiredKeys;
@property (copy, nonatomic, readonly) NTPBPrivateRecordSyncState *currentState;
@property (copy, nonatomic, readonly) CKRecordID *recordID;
@property (weak, nonatomic) id <FCPrivateRecordSyncManagerDelegate> delegate;
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
- (id)initWithRecordID:(id)arg1 desiredKeys:(id)arg2 currentState:(id)arg3;

@end
