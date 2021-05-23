/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <CloudDocsDaemon/BRCServerZone.h>

@class BRCSharedClientZone, NSString;

@interface BRCSharedServerZone : BRCServerZone

{
    NSString *_ownerName;
}

@property (nonatomic, readonly) _Bool isSharedZone;
@property (nonatomic, readonly) _Bool isPrivateZone;
@property (nonatomic, readonly) BRCSharedClientZone *clientZone;

- (id)ownerName;
- (id)asSharedZone;
- (_Bool)allocateRanksWhenCaughtUp:(_Bool)arg1;
- (id)initWithMangledID:(id)arg1 dbRowID:(id)arg2 plist:(id)arg3 session:(id)arg4;
- (_Bool)validateItemsLoggingToFile:(struct __sFILE *)arg1 db:(id)arg2;
- (_Bool)validateStructureLoggingToFile:(struct __sFILE *)arg1 db:(id)arg2;
- (void)sideCarZoneWasReset;
- (long long)_propagateDeleteToChildrenOfItemID:(id)arg1;
- (_Bool)_propagateFolderDeletesToTheirChildren;

@end
