/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface ODDIteratorAttributes : NSObject

{
    int mAxis;
    int mPointType;
    _Bool mHideLastTransition;
    int mStart;
    unsigned int mCount;
    int mStep;
}

- (unsigned int)count;
- (void)setCount:(unsigned int)arg1;
- (int)start;
- (int)step;
- (int)axis;
- (void)setAxis:(int)arg1;
- (void)setStart:(int)arg1;
- (void)setStep:(int)arg1;
- (int)pointType;
- (void)setPointType:(int)arg1;
- (_Bool)hideLastTransition;
- (void)setHideLastTransition:(_Bool)arg1;

@end
