/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

#import <TSReading/Swift-Protocol.h>

@class NSString;

@interface TSWPTab : NSObject <Swift>

{
    double _position;
    int _alignment;
    NSString *_leader;
}

@property (nonatomic) double position;
@property (nonatomic) int alignment;
@property (copy, nonatomic) NSString *leader;

+ (void)initialize;
+ (id)tab;
+ (id)kTabStopAlignmentStringLeft;
+ (id)kTabStopAlignmentStringCenter;
+ (id)kTabStopAlignmentStringRight;
+ (id)kTabStopAlignmentStringDecimal;
+ (id)kTabStopDisplayStringNone;
+ (id)kTabStopDisplayStringPoint;
+ (id)kTabStopDisplayStringDash;
+ (id)kTabStopDisplayStringUnderscore;
+ (id)kTabStopDisplayStringArrow;
+ (id)kTabStopLeaderStringPoint;
+ (id)kTabStopLeaderStringDash;
+ (id)kTabStopLeaderStringUnderscore;
+ (id)kTabStopLeaderStringArrow;
+ (id)kTabStopLeaderStringArrowRTL;
+ (id)tabLeaderFromDisplayString:(id)arg1;
+ (int)tabAlignmentFromString:(id)arg1 isRTL:(_Bool)arg2;
+ (id)stringFromTabAlignment:(int)arg1 isRTL:(_Bool)arg2;
+ (id)displayStringFromTabLeader:(id)arg1;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)compare:(id)arg1;
- (id)initWithPosition:(double)arg1 alignment:(int)arg2 leader:(id)arg3;
- (long long)compareToPosition:(double)arg1;
- (double)positionInInches;
- (void)setPositionInInches:(double)arg1;
- (_Bool)isEqualToPosition:(double)arg1;

@end
