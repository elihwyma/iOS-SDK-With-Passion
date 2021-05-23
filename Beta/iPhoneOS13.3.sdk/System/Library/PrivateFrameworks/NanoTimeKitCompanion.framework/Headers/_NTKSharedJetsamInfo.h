/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class NSLock, NSMapTable;

@interface _NTKSharedJetsamInfo : NSObject

{
    NSMapTable *_fetchers;
    NSLock *_fetchersLock;
    int _pid;
}

+ (id)sharedJetsamInfo;

- (id)init;
- (void)unregister:(id)arg1;
- (_Bool)getInfoFor:(id)arg1 into:(struct jetsam_info *)arg2;
- (_Bool)resetIntervalFor:(id)arg1;

@end
