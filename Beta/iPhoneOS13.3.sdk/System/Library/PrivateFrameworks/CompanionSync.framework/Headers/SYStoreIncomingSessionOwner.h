/*
 Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

#import <CompanionSync/SYStoreSessionOwner.h>

__attribute__((visibility("hidden")))
@interface SYStoreIncomingSessionOwner : SYStoreSessionOwner

- (_Bool)isResetSync;
- (void)syncSession:(id)arg1 applyChanges:(struct NSArray *)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)syncSession:(id)arg1 resetDataStoreWithError:(id *)arg2;
- (id)initWithIncomingSession:(id)arg1;

@end
