/*
 Image: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, SignpostEvent;

@interface SignpostCAInstrumentationProcessor : NSObject

{
    _Bool _isConciseFormat;
    unsigned int _curFrameSeed;
    CDUnknownBlockType _commitIntervalBlock;
    CDUnknownBlockType _transactionLifetimeBlock;
    CDUnknownBlockType _frameLatencyBlock;
    CDUnknownBlockType _hidLatencyBlock;
    CDUnknownBlockType _renderBlock;
    CDUnknownBlockType _frameLifetimeBlock;
    CDUnknownBlockType _contextInfoBlock;
    NSMutableDictionary *_frameSeedToAccumulatedStateDict;
    SignpostEvent *_curLongFrameLifetimeBegin;
    SignpostEvent *_curFrameLifetimeBegin;
}

@property (nonatomic, readonly) NSMutableDictionary *frameSeedToAccumulatedStateDict;
@property (retain, nonatomic) SignpostEvent *curLongFrameLifetimeBegin;
@property (retain, nonatomic) SignpostEvent *curFrameLifetimeBegin;
@property (nonatomic) unsigned int curFrameSeed;
@property (nonatomic) _Bool isConciseFormat;
@property (copy, nonatomic) CDUnknownBlockType commitIntervalBlock;
@property (copy, nonatomic) CDUnknownBlockType transactionLifetimeBlock;
@property (copy, nonatomic) CDUnknownBlockType frameLatencyBlock;
@property (copy, nonatomic) CDUnknownBlockType hidLatencyBlock;
@property (copy, nonatomic) CDUnknownBlockType renderBlock;
@property (copy, nonatomic) CDUnknownBlockType frameLifetimeBlock;
@property (copy, nonatomic) CDUnknownBlockType contextInfoBlock;

+ (void)addNeededSCToWhitelist:(id)arg1;
+ (_Bool)filterPassesRequiredSCForCAInstrumentation:(id)arg1;

- (id)init;
- (id)_stateForFrameSeed:(unsigned int)arg1;
- (void)_cleanupStateWithSeed:(unsigned int)arg1;
- (void)_handleFrameLifetimeBegin:(id)arg1;
- (void)_handleLongFrameLifetimeBegin:(id)arg1;
- (void)_handleHIDInterval:(id)arg1;
- (void)_handleRenderInterval:(id)arg1;
- (void)_handleFrameLatencyInterval:(id)arg1;
- (void)_handleFrameLifetimeInterval:(id)arg1 isLong:(_Bool)arg2;
- (void)_handleContextInfo:(id)arg1;
- (_Bool)handleSignpostInterval:(id)arg1;
- (void)handleSignpostIntervalBegin:(id)arg1;
- (_Bool)handleSignpostEvent:(id)arg1;
- (void)handleDeviceReboot;
- (id)newConfiguredExtractor;

@end
