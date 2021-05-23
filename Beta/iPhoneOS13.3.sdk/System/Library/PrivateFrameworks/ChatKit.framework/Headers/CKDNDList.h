/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Foundation/NSObject.h>

@class NPSManager;

@interface CKDNDList : NSObject

{
    NPSManager *_syncManager;
}

@property (retain, nonatomic) NPSManager *syncManager;

+ (id)sharedList;

- (id)init;
- (void)dealloc;
- (void)performMigrationIfNecessary;
- (id)unmuteDateForChat:(id)arg1;
- (id)unmuteDateForIdentifier:(id)arg1;
- (id)groupHashForHandleIDs:(id)arg1;
- (id)groupHashForChat:(id)arg1;
- (id)currentList;
- (void)muteChat:(id)arg1 untilDate:(id)arg2 syncToPairedDevice:(_Bool)arg3;
- (void)muteChat:(id)arg1 usingIdentifier:(id)arg2 untilDate:(id)arg3 syncToPairedDevice:(_Bool)arg4;
- (void)syncToPairedDeviceIncludingVersion:(_Bool)arg1;
- (id)_deprecated_globalIdentifierForChat:(id)arg1;
- (_Bool)isMutedChat:(id)arg1;
- (_Bool)isMutedChatIdentifier:(id)arg1 handleIDs:(id)arg2 style:(unsigned char)arg3 isSMS:(_Bool)arg4;
- (void)muteChat:(id)arg1 untilDate:(id)arg2;
- (void)_handleDNDListChanged;

@end
