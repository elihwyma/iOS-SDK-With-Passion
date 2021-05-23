/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

@class NSHashTable;

@interface ARStarBoardSceneManager : NSObject

{
    NSHashTable *_observers;
}

+ (id)sharedInstance;

- (id)init;
- (void)starBoardSceneConnected:(id)arg1;
- (void)starBoardSceneDisconnected:(id)arg1;
- (void)addSceneObserver:(id)arg1;

@end
