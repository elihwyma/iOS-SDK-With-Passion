/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

#import <Foundation/NSObject.h>

@class PETScalarEventTracker;

@interface SGMEventBannerConfirmed : NSObject

{
    PETScalarEventTracker *_tracker;
}

@property (nonatomic, readonly) PETScalarEventTracker *tracker;

- (id)init;
- (void)trackEventWithScalar:(unsigned long long)arg1 app:(struct SGMBannerDisplayApp_)arg2 category:(struct SGMEventCategory_)arg3 extracted:(struct SGMEventExtractionType_)arg4 state:(struct SGMEventState_)arg5 titleAdj:(struct SGMEventStringAdj_)arg6 dateAdj:(struct SGMEventDateAdj_)arg7 duraAdj:(struct SGMEventDurationAdj_)arg8;

@end
