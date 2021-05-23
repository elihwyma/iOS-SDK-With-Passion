/*
 Image: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@protocol MSPauseManagerDelegate;

@interface MSPauseManager : NSObject

{
    NSMutableDictionary *_UUIDToTimerMap;
    id <MSPauseManagerDelegate> _delegate;
}

@property (weak, nonatomic) id <MSPauseManagerDelegate> delegate;

+ (id)sharedManager;

- (id)init;
- (void)dealloc;
- (_Bool)isPaused;
- (void)_timerDidFire:(id)arg1;
- (void)_addPauseUUID:(id)arg1;
- (void)pingPauseUUID:(id)arg1;
- (void)_removeTimerUUID:(id)arg1;
- (void)unpauseUUID:(id)arg1;

@end
