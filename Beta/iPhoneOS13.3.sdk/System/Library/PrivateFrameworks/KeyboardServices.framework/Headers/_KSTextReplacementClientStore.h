/*
 Image: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
 */

#import <Foundation/NSObject.h>

#import <KeyboardServices/Swift-Protocol.h>

@class NSString, _KSTextReplacementServerConnection;

@interface _KSTextReplacementClientStore : NSObject <Swift>

{
    _KSTextReplacementServerConnection *_connection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)removeAllEntries;
- (void)performTransaction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)queryTextReplacementsWithCallback:(CDUnknownBlockType)arg1;
- (void)addEntries:(id)arg1 removeEntries:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)queryTextReplacementsWithPredicate:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)requestSyncWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)textReplacementEntries;
- (void)cancelPendingUpdates;
- (void)modifyEntry:(id)arg1 toEntry:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (id)phraseShortcuts;

@end
