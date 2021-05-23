/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

#import <Foundation/NSObject.h>

@class PETScalarEventTracker;

@interface SGMContactDetailSent : NSObject

{
    PETScalarEventTracker *_tracker;
}

@property (nonatomic, readonly) PETScalarEventTracker *tracker;

- (id)init;
- (void)trackEventWithScalar:(unsigned long long)arg1 source:(struct SGMDocumentType_)arg2 detail:(struct SGMContactDetailType_)arg3 foundIn:(struct SGMContactDetailFoundIn_)arg4 hasName:(struct SGMTypeSafeBool_)arg5 tokens:(struct SGMLowCount_)arg6;

@end
