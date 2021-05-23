/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, SUScriptDictionary;

@protocol OS_dispatch_queue;

@interface SUScriptStoreBagLoader : NSObject

{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSDictionary *_bagDictionary;
    SUScriptDictionary *_scriptStoreBagDictionary;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)_updateWithBagDictionary:(id)arg1 allowsPostingBagDidChangeNotification:(_Bool)arg2;
- (void)bagDidChange:(id)arg1;
- (id)scriptStoreBagDictionary;

@end
