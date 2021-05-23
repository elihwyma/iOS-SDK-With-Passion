/*
 Image: /System/Library/PrivateFrameworks/SoundBoardServices.framework/SoundBoardServices
 */

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

@interface SBSDefaultInfo : NSObject

{
    _Bool _isBool;
    _Bool _isDouble;
    NSString *_stringForUserDefault;
    NSString *_userDescription;
    NSObject *_defaultValue;
    NSNumber *_rangeMin;
    NSNumber *_rangeMax;
}

@property (readonly) NSString *stringForUserDefault;
@property (readonly) NSString *userDescription;
@property (readonly) NSObject *defaultValue;
@property (readonly) _Bool isBool;
@property (readonly) _Bool isDouble;
@property (readonly) NSNumber *rangeMin;
@property (readonly) NSNumber *rangeMax;

+ (id)defaultsName:(id)arg1 asBool:(_Bool)arg2;
+ (id)defaultsName:(id)arg1 asBool:(_Bool)arg2 userInfo:(id)arg3;
+ (id)defaultsName:(id)arg1 asInt:(int)arg2;
+ (id)defaultsName:(id)arg1 asInt:(int)arg2 rangeMin:(int)arg3 rangeMax:(int)arg4;
+ (id)defaultsName:(id)arg1 asInt:(int)arg2 userInfo:(id)arg3;
+ (id)defaultsName:(id)arg1 asInt:(int)arg2 rangeMin:(int)arg3 rangeMax:(int)arg4 userInfo:(id)arg5;
+ (id)defaultsName:(id)arg1 asDouble:(double)arg2;
+ (id)defaultsName:(id)arg1 asDouble:(double)arg2 rangeMin:(double)arg3 rangeMax:(double)arg4;
+ (id)defaultsName:(id)arg1 asDouble:(double)arg2 userInfo:(id)arg3;
+ (id)defaultsName:(id)arg1 asDouble:(double)arg2 rangeMin:(double)arg3 rangeMax:(double)arg4 userInfo:(id)arg5;
+ (id)defaultsName:(id)arg1 asString:(id)arg2;
+ (id)defaultsName:(id)arg1 asString:(id)arg2 userInfo:(id)arg3;

@end
