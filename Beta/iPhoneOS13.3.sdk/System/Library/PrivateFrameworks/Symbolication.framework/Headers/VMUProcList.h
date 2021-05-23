/*
 Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <Foundation/NSObject.h>

@class NSLock, NSMutableDictionary;

@interface VMUProcList : NSObject

{
    NSLock *procLock;
    NSMutableDictionary *allProcs;
    NSMutableDictionary *filteredProcs;
    _Bool appsOnly;
    _Bool ownedOnly;
}

- (id)init;
- (unsigned long long)count;
- (_Bool)update;
- (id)allNames;
- (_Bool)updateFromSystem;
- (void)_populateFromSystem;
- (id)newestProcInfoWithName:(id)arg1;
- (void)setProcInfos:(id)arg1;
- (void)addProcInfo:(id)arg1;
- (void)removeProcInfo:(id)arg1;
- (void)setOwnedOnly:(_Bool)arg1;
- (_Bool)ownedOnly:(_Bool)arg1;
- (void)setAppsOnly:(_Bool)arg1;
- (_Bool)appsOnly;
- (id)allProcInfos;
- (id)allPIDs;
- (id)allPathNames;
- (id)newestProcInfo;
- (id)procInfoWithPID:(int)arg1;

@end
