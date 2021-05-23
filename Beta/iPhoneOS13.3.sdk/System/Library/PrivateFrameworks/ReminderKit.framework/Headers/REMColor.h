/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <Foundation/NSObject.h>

#import <ReminderKit/Swift-Protocol.h>

@class NSString;

@interface REMColor : NSObject <Swift>

{
    unsigned long long _colorRGBSpace;
    double _blue;
    double _red;
    double _green;
    double _alpha;
    NSString *_daSymbolicColorName;
    NSString *_daHexString;
    NSString *_ckSymbolicColorName;
}

@property (nonatomic, readonly) NSString *daSymbolicColorName;
@property (nonatomic, readonly) NSString *daHexString;
@property (nonatomic, readonly) NSString *ckSymbolicColorName;
@property (nonatomic, readonly) unsigned long long colorRGBSpace;
@property (nonatomic, readonly) double blue;
@property (nonatomic, readonly) double red;
@property (nonatomic, readonly) double green;
@property (nonatomic, readonly) double alpha;

+ (_Bool)supportsSecureCoding;
+ (id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
+ (id)blackColor;
+ (id)whiteColor;
+ (id)grayColor;
+ (id)redColor;
+ (id)greenColor;
+ (id)blueColor;
+ (id)cyanColor;
+ (id)magentaColor;
+ (id)yellowColor;
+ (id)clearColor;
+ (id)brownColor;
+ (id)lightGrayColor;
+ (id)orangeColor;
+ (id)purpleColor;
+ (id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 targetRGBSpace:(unsigned long long)arg5;
+ (id)colorWithHexString:(id)arg1;
+ (id)colorWithDictionaryData:(id)arg1 error:(id *)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
- (id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 colorSpace:(unsigned long long)arg5;
- (id)initWithWhite:(double)arg1 alpha:(double)arg2;
- (id)initWithHexString:(id)arg1;
- (id)hexString;
- (id)initWithDASymbolicColorName:(id)arg1 daHexString:(id)arg2 ckSymbolicColorName:(id)arg3;
- (id)hexStringWithAlpha;
- (id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 colorSpace:(unsigned long long)arg5 daSymbolicColorName:(id)arg6 daHexString:(id)arg7 ckSymbolicColorName:(id)arg8;
- (id)initWithDASymbolicColorName:(id)arg1 daHexString:(id)arg2;
- (id)initWithCKSymbolicColorName:(id)arg1 hexString:(id)arg2;
- (id)archivedDictionaryDataWithError:(id *)arg1;

@end
