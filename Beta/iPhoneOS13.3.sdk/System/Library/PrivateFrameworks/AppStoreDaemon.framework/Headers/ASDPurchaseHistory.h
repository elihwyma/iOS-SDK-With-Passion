/*
 Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

#import <Foundation/NSObject.h>

@class ASDServiceBroker, NSString;

@interface ASDPurchaseHistory : NSObject

{
    ASDServiceBroker *_serviceBroker;
    int _databaseChangedNotificationToken;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)interface;

- (id)init;
- (void)dealloc;
- (id)_initWithServiceBroker:(id)arg1;
- (void)updateForAccountID:(long long)arg1 withContext:(unsigned long long)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)updateWithContext:(unsigned long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)executeQuery:(id)arg1 withResultHandler:(CDUnknownBlockType)arg2;
- (void)setHidden:(_Bool)arg1 forStoreItemID:(long long)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)showAllWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)updateForAccountID:(long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)updateWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
