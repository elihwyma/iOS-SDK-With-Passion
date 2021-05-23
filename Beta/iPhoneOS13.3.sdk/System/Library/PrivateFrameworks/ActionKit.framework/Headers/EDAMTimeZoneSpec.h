/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/FATObject.h>

@class NSNumber, NSString;

@interface EDAMTimeZoneSpec : FATObject

{
    NSString *_id;
    NSNumber *_rawUTCOffsetMillis;
    NSNumber *_dstSavingsAdjustmentMillis;
    NSNumber *_nextEnterDaylightSavings;
    NSNumber *_nextLeaveDaylightSavings;
}

@property (retain, nonatomic) NSString *id;
@property (retain, nonatomic) NSNumber *rawUTCOffsetMillis;
@property (retain, nonatomic) NSNumber *dstSavingsAdjustmentMillis;
@property (retain, nonatomic) NSNumber *nextEnterDaylightSavings;
@property (retain, nonatomic) NSNumber *nextLeaveDaylightSavings;

+ (id)structName;
+ (id)structFields;

@end
