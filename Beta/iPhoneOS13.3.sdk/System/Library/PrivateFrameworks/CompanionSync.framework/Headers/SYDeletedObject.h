/*
 Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

#import <NSObject.h>

@class NSString;

@interface SYDeletedObject : NSObject

{
    NSString *_sequencer;
    NSString *_syncId;
}

@property (retain, nonatomic) NSString *syncId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *objectIdentifier;
@property (nonatomic, readonly) NSString *sequencer;
@property (nonatomic, readonly) long long changeType;

- (id)initWithSyncId:(id)arg1;
- (id)initWithObjectID:(id)arg1 sequencer:(id)arg2;

@end
