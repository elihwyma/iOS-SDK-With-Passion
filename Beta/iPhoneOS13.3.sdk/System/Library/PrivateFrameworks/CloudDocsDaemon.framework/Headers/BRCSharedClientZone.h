/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <CloudDocsDaemon/BRCClientZone.h>

@class BRCSharedServerZone, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface BRCSharedClientZone : BRCClientZone

{
    NSMutableDictionary *_shareAcceptationByItemID;
}

@property (nonatomic, readonly) NSString *ownerName;
@property (nonatomic, readonly) _Bool isSharedZone;
@property (nonatomic, readonly) _Bool isPrivateZone;
@property (nonatomic, readonly) BRCSharedServerZone *sharedZone;

- (id)asSharedClientZone;
- (id)rootItemID;
- (void)setServerZone:(id)arg1;
- (void)addAcceptOperation:(id)arg1 forItemID:(id)arg2;
- (id)shareAcceptOperationForItemID:(id)arg1;
- (void)removeAllShareAcceptationSidefaults;
- (struct PQLResultSet *)shareAcceptationSidefaultEnumerator;

@end
