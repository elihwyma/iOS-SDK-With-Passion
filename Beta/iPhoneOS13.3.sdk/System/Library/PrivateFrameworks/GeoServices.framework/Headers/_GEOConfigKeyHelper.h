/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface _GEOConfigKeyHelper : NSObject

{
    id _lastValue;
    NSNumber *_keyNumber;
    NSString *_keyString;
    CDStruct_065526f1 configKey;
}

@property (nonatomic, readonly) CDStruct_065526f1 configKey;
@property (nonatomic, readonly) NSNumber *keyNumber;
@property (nonatomic, readonly) NSString *keyString;
@property (nonatomic, readonly) _Bool valueChanged;

+ (id)helperForGEOConfigKey:(CDStruct_065526f1)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_currentValue;
- (_Bool)isEqualTo_GEOConfigKeyHelper:(id)arg1;

@end
