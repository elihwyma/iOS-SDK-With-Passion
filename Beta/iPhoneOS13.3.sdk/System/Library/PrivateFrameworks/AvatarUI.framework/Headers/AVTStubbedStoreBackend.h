/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol AVTAvatarRecordChangeTracker, AVTStoreBackendDelegate;

@interface AVTStubbedStoreBackend : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <AVTStoreBackendDelegate> backendDelegate;
@property (nonatomic, readonly) id <AVTAvatarRecordChangeTracker> recordChangeTracker;

- (id)avatarsForFetchRequest:(id)arg1 error:(id *)arg2;
- (_Bool)saveAvatar:(id)arg1 error:(id *)arg2;
- (_Bool)saveAvatars:(id)arg1 error:(id *)arg2;
- (_Bool)deleteAvatarWithIdentifier:(id)arg1 error:(id *)arg2;
- (id)duplicateAvatarRecord:(id)arg1 error:(id *)arg2;
- (_Bool)canCreateAvatarWithError:(id *)arg1;

@end
