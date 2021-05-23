/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

#import <Foundation/NSObject.h>

@class PETScalarEventTracker;

@interface SGMContactConfirmed : NSObject

{
    PETScalarEventTracker *_tracker;
}

@property (nonatomic, readonly) PETScalarEventTracker *tracker;

- (id)init;
- (void)trackEventWithScalar:(unsigned long long)arg1 app:(struct SGMBannerDisplayApp_)arg2 firstNameAdj:(struct SGMTypeSafeBool_)arg3 lastNameAdj:(struct SGMTypeSafeBool_)arg4 middleNameAdj:(struct SGMTypeSafeBool_)arg5 isUpdate:(struct SGMTypeSafeBool_)arg6 extracted:(struct SGMBannerExtractionType_)arg7 extractionModelVersion:(unsigned long long)arg8 selfId:(struct SGMTypeSafeBool_)arg9 contactDetail:(struct SGMContactDetailType_)arg10;

@end
