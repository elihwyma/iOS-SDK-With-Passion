/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class NSArray, NSDictionary;

@interface BWStreamStartStopSynchronizer : NSObject

{
    NSDictionary *_streamStatesByPortType;
    float _timeoutInSeconds;
    _Bool _masterStartedGroupEntered;
    NSArray *_synchronizationSlavesOrderedByPriority;
}

@property (nonatomic) _Bool waitForMasterAEToSettle;
@property (retain, nonatomic) NSArray *synchronizationSlavesOrderedByPriority;

+ (void)initialize;

- (void)dealloc;
- (id)initWithStreams:(id)arg1 timeoutInSeconds:(float)arg2;
- (_Bool)streamWillStart:(id)arg1;
- (void)streamDidStart:(id)arg1;
- (_Bool)streamWillStop:(id)arg1;
- (void)streamDidStop:(id)arg1;

@end
