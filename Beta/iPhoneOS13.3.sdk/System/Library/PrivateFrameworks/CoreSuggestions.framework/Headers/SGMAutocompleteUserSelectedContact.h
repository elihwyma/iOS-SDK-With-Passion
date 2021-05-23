/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

#import <Foundation/NSObject.h>

@class PETScalarEventTracker;

@interface SGMAutocompleteUserSelectedContact : NSObject

{
    PETScalarEventTracker *_tracker;
}

@property (nonatomic, readonly) PETScalarEventTracker *tracker;

- (id)init;
- (void)trackEventWithScalar:(unsigned long long)arg1 wasSuggestedContact:(struct SGMTypeSafeBool_)arg2 wasKnownContact:(struct SGMTypeSafeBool_)arg3 app:(struct SGMContactDetailUsedApp_)arg4;

@end
