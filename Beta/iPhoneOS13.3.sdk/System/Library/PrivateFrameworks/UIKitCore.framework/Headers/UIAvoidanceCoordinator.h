/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSMutableSet;

__attribute__((visibility("hidden")))
@interface UIAvoidanceCoordinator : NSObject

{
    NSMutableDictionary *_blockades;
    NSMutableSet *_clients;
    int _recurseCount;
    struct CGRect _avoidanceFrame;
}

@property (nonatomic) struct CGRect avoidanceFrame;

- (id)init;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)releaseAll:(id)arg1 withType:(unsigned long long)arg2;
- (id)findClientsForBlockade:(id)arg1;
- (void)updateClients:(id)arg1;
- (id)findNamesForBlockade:(id)arg1;
- (id)findBlockadesForName:(id)arg1;
- (void)setGroupOfBlockades:(id)arg1 forBlockadeIdentifier:(id)arg2;
- (void)addAvoidanceObject:(id)arg1;
- (void)removeAvoidanceObject:(id)arg1;

@end
