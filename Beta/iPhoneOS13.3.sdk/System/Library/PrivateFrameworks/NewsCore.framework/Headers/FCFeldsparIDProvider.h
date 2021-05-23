/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class FCUserInfo, NSHashTable, NSString;

@interface FCFeldsparIDProvider : NSObject

{
    FCUserInfo *_userInfo;
    NSString *_feldsparID;
    NSHashTable *_observers;
}

@property (retain, nonatomic) FCUserInfo *userInfo;
@property (copy, nonatomic) NSString *feldsparID;
@property (nonatomic, readonly) NSHashTable *observers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)userInfoDidChangeFeldsparID:(id)arg1 fromCloud:(_Bool)arg2;
- (void)_updateFeldsparID:(id)arg1;
- (void)registerUserInfo:(id)arg1;

@end
