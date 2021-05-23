/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OADProperties.h>

@class NSNumber, PDTransitionOptions;

__attribute__((visibility("hidden")))
@interface PDTransition : OADProperties

{
    _Bool mHasType;
    int mType;
    _Bool mHasSpeed;
    int mSpeed;
    _Bool mHasAdvanceOnClick;
    _Bool mIsAdvanceOnClick;
    _Bool mHasAdvanceAfterTime;
    int mAdvanceAfterTime;
    PDTransitionOptions *mOptions;
    NSNumber *duration;
}

@property (retain, nonatomic) NSNumber *duration;

- (id)init;
- (id)description;
- (id)options;
- (int)type;
- (void)setType:(int)arg1;
- (void)setOptions:(id)arg1;
- (int)speed;
- (void)setSpeed:(int)arg1;
- (_Bool)hasType;
- (_Bool)hasSpeed;
- (void)setIsAdvanceOnClick:(_Bool)arg1;
- (void)setAdvanceAfterTime:(int)arg1;
- (_Bool)hasTransitionOptions;
- (_Bool)hasIsAdvanceOnClick;
- (_Bool)hasAdvanceAfterTime;
- (_Bool)isAdvanceOnClick;
- (int)advanceAfterTime;

@end
