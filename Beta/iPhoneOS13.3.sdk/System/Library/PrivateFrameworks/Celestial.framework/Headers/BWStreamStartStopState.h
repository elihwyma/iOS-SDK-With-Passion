/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class BWFigVideoCaptureStream, NSArray;

@protocol OS_dispatch_group;

@interface BWStreamStartStopState : NSObject

{
    BWFigVideoCaptureStream *_stream;
    NSObject<OS_dispatch_group> *_hasStartedGroup;
    _Bool _hasEnteredStartedGroup;
    NSObject<OS_dispatch_group> *_dependentsHaveStoppedGroup;
    BWStreamStartStopState *_blockingMasterState;
    NSArray *_blockingSlaveStates;
    float _timeoutInSeconds;
    _Bool _waitForMasterAEToSettle;
}

@property (nonatomic, readonly) BWFigVideoCaptureStream *stream;
@property (retain, nonatomic) NSArray *blockingSlaveStates;
@property (nonatomic) _Bool waitForMasterAEToSettle;

- (void)dealloc;
- (id)description;
- (_Bool)dependentWillStart;
- (void)dependentDidStop;
- (id)initWithStream:(id)arg1 masterState:(id)arg2 timeoutInSeconds:(float)arg3;
- (_Bool)streamWillStart;
- (void)streamDidStart;
- (_Bool)streamWillStop;
- (void)streamDidStop;

@end
