/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class OADDrawable, PDBuild, PDSequentialTimeNode;

__attribute__((visibility("hidden")))
@interface PDAnimationInfoData : NSObject

{
    unsigned int mOrder;
    PDBuild *mBuild;
    PDSequentialTimeNode *mSequentialTimeNodeData;
    OADDrawable *mDrawable;
}

- (id)data;
- (unsigned int)order;
- (id)build;
- (id)drawable;
- (id)initWithTarget:(id)arg1 presetClass:(int)arg2 presetId:(int)arg3 triggerType:(int)arg4 iterateType:(int)arg5 delay:(double)arg6 direction:(double)arg7 order:(unsigned int)arg8 groupId:(id)arg9 build:(id)arg10;

@end
