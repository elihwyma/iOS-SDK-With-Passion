/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableArray, NSString, PDIterate;

__attribute__((visibility("hidden")))
@interface PDTimeNode : NSObject

{
    NSMutableArray *mStartTimeConditions;
    NSMutableArray *mEndTimeConditions;
    NSMutableArray *mChildTimeNodeList;
    NSMutableArray *mSubTimeNodeList;
    PDIterate *mIterate;
    int mType;
    int mAnimationPresetClass;
    _Bool mHasPresetId;
    int mPresetId;
    _Bool mHasPresetSubType;
    int mPresetSubType;
    _Bool mHasRepeatCount;
    int mRepeatCount;
    _Bool mHasRepeatDuration;
    int mRepeatDuration;
    int mRestartType;
    _Bool mHasDuration;
    double mDuration;
    _Bool mHasSpeed;
    double mSpeed;
    _Bool mHasAcceleration;
    double mAcceleration;
    _Bool mHasDeceleration;
    double mDeceleration;
    _Bool mHasDisplay;
    _Bool mDisplay;
    _Bool mHasFillType;
    int mFillType;
    NSString *mGroupId;
    NSDictionary *attributeMap;
}

@property (retain, nonatomic) NSDictionary *attributeMap;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (int)type;
- (void)setType:(int)arg1;
- (double)duration;
- (void)setDuration:(double)arg1;
- (double)speed;
- (void)setSpeed:(double)arg1;
- (void)setRepeatCount:(int)arg1;
- (void)setDisplay:(_Bool)arg1;
- (double)acceleration;
- (_Bool)display;
- (int)repeatCount;
- (_Bool)hasType;
- (_Bool)hasSpeed;
- (id)groupId;
- (void)setGroupId:(id)arg1;
- (_Bool)hasDuration;
- (int)repeatDuration;
- (void)setRepeatDuration:(int)arg1;
- (void)setAcceleration:(double)arg1;
- (void)setDeceleration:(double)arg1;
- (double)deceleration;
- (int)fillType;
- (long long)writeDuration;
- (void)setChildTimeNodeList:(id)arg1;
- (id)childTimeNodeList;
- (void)setStartTimeConditions:(id)arg1;
- (void)setPresetId:(int)arg1;
- (void)setPresetSubType:(int)arg1;
- (void)setAnimationPresetClass:(int)arg1;
- (void)setGroupIdValue:(int)arg1;
- (int)animationPresetClass;
- (int)restartType;
- (int)presetId;
- (int)presetSubType;
- (id)startTimeConditions;
- (id)endTimeConditions;
- (id)subTimeNodeList;
- (id)iterate;
- (void)setEndTimeConditions:(id)arg1;
- (void)setSubTimeNodeList:(id)arg1;
- (void)setIterate:(id)arg1;
- (_Bool)hasPresetClass;
- (_Bool)hasPresetSubType;
- (_Bool)hasPresetId;
- (_Bool)hasRepeatCount;
- (_Bool)hasRepeatDuration;
- (_Bool)hasRestartType;
- (void)setRestartType:(int)arg1;
- (_Bool)hasAcceleration;
- (_Bool)hasDeceleration;
- (_Bool)hasFillType;
- (void)setFillType:(int)arg1;
- (_Bool)hasDisplay;
- (long long)writeRepeatCount;

@end
