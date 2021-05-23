/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

#import <Foundation/NSObject.h>

@class PETScalarEventTracker;

@interface SGMContactInBanner : NSObject

{
    PETScalarEventTracker *_tracker;
}

@property (nonatomic, readonly) PETScalarEventTracker *tracker;

- (id)init;
- (void)trackEventWithScalar:(unsigned long long)arg1 app:(struct SGMBannerDisplayApp_)arg2 extracted:(struct SGMBannerExtractionType_)arg3 selfId:(struct SGMTypeSafeBool_)arg4 extractionModelVersion:(unsigned long long)arg5 contactDetail:(struct SGMContactDetailType_)arg6;

@end
