/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface TICAnalyticsMetricsKey : NSObject

{
    unsigned char _keyboardType;
    NSString *_language;
    NSString *_region;
    NSString *_layoutName;
    long long _userInterfaceIdiom;
}

@property (nonatomic, readonly) NSString *language;
@property (nonatomic, readonly) NSString *region;
@property (nonatomic, readonly) NSString *layoutName;
@property (nonatomic, readonly) unsigned char keyboardType;
@property (nonatomic, readonly) long long userInterfaceIdiom;

+ (_Bool)supportsSecureCoding;
+ (id)keyboardTypeEnumToString:(unsigned char)arg1;
+ (unsigned char)keyboardTypeStringToEnum:(id)arg1;
+ (id)userInterfaceIdiomToString:(long long)arg1;
+ (long long)userInterfaceIdiomStringToEnum:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeyboardState:(id)arg1;
- (id)initWithLanguage:(id)arg1 region:(id)arg2 layoutName:(id)arg3 keyboardType:(unsigned char)arg4 userInterfaceIdiom:(long long)arg5;

@end
