/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <Foundation/NSObject.h>

@class NSSet, NSString;

__attribute__((visibility("hidden")))
@interface BRCDaemonContainerHelper : NSObject

{
    NSSet *_disabledBundleIDs;
    NSSet *_knownBundleIDs;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)itemIDForURL:(id)arg1 error:(id *)arg2;
- (unsigned short)br_capabilityToMoveFromURL:(id)arg1 toNewParent:(id)arg2 error:(id *)arg3;
- (id)fetchContainerForURL:(id)arg1;
- (id)fetchAllContainersByIDWithError:(id *)arg1;
- (_Bool)canFetchAllContainersByID;
- (_Bool)cloudSyncTCCDisabledForContainerMeta:(id)arg1;
- (unsigned short)br_capabilityToMoveFromLookup:(id)arg1 toNewParent:(id)arg2 session:(id)arg3 error:(id *)arg4;

@end
