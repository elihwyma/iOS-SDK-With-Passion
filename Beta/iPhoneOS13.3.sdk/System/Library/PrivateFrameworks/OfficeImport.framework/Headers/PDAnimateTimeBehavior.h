/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/PDAnimateBehavior.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface PDAnimateTimeBehavior : PDAnimateBehavior

{
    NSString *mTo;
    NSString *mFrom;
    NSString *mBy;
    _Bool mHasCalcMode;
    int mCalcMode;
    _Bool mHasValueType;
    int mValueType;
}

- (id)init;
- (id)to;
- (id)from;
- (int)valueType;
- (void)setFrom:(id)arg1;
- (void)setTo:(id)arg1;
- (void)setValueType:(int)arg1;
- (_Bool)hasValueType;
- (id)by;
- (void)setBy:(id)arg1;
- (_Bool)hasCalcMode;
- (int)calcMode;
- (void)setCalcMode:(int)arg1;

@end
