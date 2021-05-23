/*
 Image: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
 */

#import <Foundation/NSObject.h>

@class NSString, _KSTextReplacementServer;

@interface _KSTRClient : NSObject

{
    _KSTextReplacementServer *_owner;
    _Bool _hasReadAccess;
    long long _generation;
}

@property (nonatomic) long long generation;
@property (nonatomic, readonly) _Bool hasReadAccess;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)cancel;
- (id)initWithOwner:(id)arg1;
- (void)removeAllEntries;
- (void)addEntries:(id)arg1 removeEntries:(id)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)requestSyncWithReply:(CDUnknownBlockType)arg1;
- (void)cancelPendingUpdatesWithReply:(CDUnknownBlockType)arg1;
- (void)queryTextReplacementEntriesWithReply:(CDUnknownBlockType)arg1;
- (void)queryTextReplacementsWithPredicate:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (id)initWithOwner:(id)arg1 forConnection:(id)arg2;

@end
