/*
 Image: /System/Library/PrivateFrameworks/UserActivity.framework/UserActivity
 */

#import <Foundation/NSUserActivity.h>

@class CSSearchableItemAttributeSet, NSUUID;

@interface NSUserActivity (CSSearchableItemAttributeSet)

@property (copy) CSSearchableItemAttributeSet *contentAttributeSet;
@property (copy, readonly) NSUUID *_originalUniqueIdentifier;
@property (readonly) unsigned long long _userInfoChangeCount;

+ (_Bool)_registerAsProxyForApplication:(int)arg1 options:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;

- (id)_objectForIdentifier:(id)arg1;
- (id)_payloadForIdentifier:(id)arg1;
- (void)_setPayloadIdentifier:(id)arg1 object:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)_setPayload:(id)arg1 object:(id)arg2 identifier:(id)arg3 dirty:(_Bool)arg4;
- (unsigned long long)_beginUserInfoUpdate:(id)arg1;
- (_Bool)_finishUserInfoUpdate;
- (void)_setPayload:(id)arg1 object:(id)arg2 identifier:(id)arg3;
- (void)_updateForwardToCoreSpotlightIndexer:(BOOL)arg1;
- (void)_sendToCoreSpotlightIndexer;
- (CDUnknownBlockType)_payloadUpdateBlockForIdentifier:(id)arg1;
- (void)_setDirty:(_Bool)arg1 identifier:(id)arg2;
- (id)_copyWithNewUUID;

@end
