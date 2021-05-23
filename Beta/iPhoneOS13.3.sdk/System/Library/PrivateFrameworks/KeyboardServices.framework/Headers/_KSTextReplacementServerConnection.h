/*
 Image: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
 */

#import <Foundation/NSObject.h>

@class NSString, NSXPCConnection;

@interface _KSTextReplacementServerConnection : NSObject

{
    NSXPCConnection *_serviceConnection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)serviceConnection;

- (id)init;
- (void)dealloc;
- (void)removeAllEntries;
- (id)textReplacementEntries;
- (void)addEntries:(id)arg1 removeEntries:(id)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)requestSyncWithReply:(CDUnknownBlockType)arg1;
- (void)cancelPendingUpdatesWithReply:(CDUnknownBlockType)arg1;
- (void)queryTextReplacementEntriesWithReply:(CDUnknownBlockType)arg1;
- (void)queryTextReplacementsWithPredicate:(id)arg1 reply:(CDUnknownBlockType)arg2;

@end
