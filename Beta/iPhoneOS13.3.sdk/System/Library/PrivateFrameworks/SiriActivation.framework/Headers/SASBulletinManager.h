/*
 Image: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
 */

#import <Foundation/NSObject.h>

@class BBObserver, NSMutableDictionary, NSString, SASBulletinCache;

@protocol SASBulletinManagerDelegate;

@interface SASBulletinManager : NSObject

{
    BBObserver *_observer;
    SASBulletinCache *_bulletinCache;
    NSMutableDictionary *_bulletinsOnLockScreen;
    id <SASBulletinManagerDelegate> _delegate;
}

@property (weak, nonatomic) id <SASBulletinManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)_setupObserver;
- (id)_displayNameForBulletin:(id)arg1;
- (void)observer:(id)arg1 purgeReferencesToBulletinID:(id)arg2;
- (void)observer:(id)arg1 noteInvalidatedBulletinIDs:(id)arg2;
- (void)observer:(id)arg1 addBulletin:(id)arg2 forFeed:(unsigned long long)arg3;
- (void)observer:(id)arg1 modifyBulletin:(id)arg2;
- (void)observer:(id)arg1 removeBulletin:(id)arg2 forFeed:(unsigned long long)arg3;
- (void)observer:(id)arg1 removeBulletin:(id)arg2;
- (id)bulletinsOnLockScreen;
- (id)allBulletins;
- (id)bulletinForIdentifier:(id)arg1;
- (void)markBulletinWithIdentifier:(id)arg1 asRead:(_Bool)arg2;
- (void)_bulletinsDidChange;
- (void)addBulletinCompletionWithBulletin:(id)arg1 forFeed:(unsigned long long)arg2;
- (void)modifyBulletinCompletionWithBulletin:(id)arg1;

@end
