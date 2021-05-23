/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSString, NSUUID, SBPressCollector;

@protocol SBPressSequenceObserverDelegate;

@interface SBPressSequenceObserver : NSObject

{
    NSUUID *_sosTriggerUUID;
    NSString *_pressName;
    SBPressCollector *_pressCollector;
    id <SBPressSequenceObserverDelegate> _delegate;
}

@property (weak, nonatomic) id <SBPressSequenceObserverDelegate> delegate;
@property (nonatomic, readonly) NSString *pressName;
@property (nonatomic, readonly) SBPressCollector *pressCollector;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)initWithPressName:(id)arg1;
- (void)pressCollector:(id)arg1 didCollectSequence:(id)arg2;
- (void)noteDidBeginSOSWithUUID:(id)arg1;
- (void)metricDidPost:(id)arg1 data:(id)arg2;
- (void)_notePowerDownImminent;
- (void)_setPressCollector:(id)arg1;

@end
