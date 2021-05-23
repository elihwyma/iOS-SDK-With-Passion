/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

#import <Foundation/NSObject.h>

@class PETScalarEventTracker;

@interface SGMContactDetailConversationTurn : NSObject

{
    PETScalarEventTracker *_tracker;
}

@property (nonatomic, readonly) PETScalarEventTracker *tracker;

- (id)init;
- (void)trackEventWithScalar:(unsigned long long)arg1 detailExtraction:(struct SGMDetailExtractionType_)arg2 selfIdName:(struct SGMTypeSafeBool_)arg3 extractionModelVersion:(unsigned long long)arg4 receivedConverstationTurn:(struct SGMTypeSafeBool_)arg5 knownSuggestedContactDetail:(struct SGMTypeSafeBool_)arg6 curatedContactDetail:(struct SGMTypeSafeBool_)arg7 throughApp:(struct SGMContactDetailUsedApp_)arg8 contactDetailUsed:(struct SGMContactDetailType_)arg9;

@end
