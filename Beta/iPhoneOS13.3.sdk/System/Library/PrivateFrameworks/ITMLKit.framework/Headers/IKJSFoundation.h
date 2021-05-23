/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <Foundation/NSObject.h>

@class IKAppContext, NSMutableDictionary;

@protocol IKAppDeviceConfig;

@interface IKJSFoundation : NSObject

{
    IKAppContext *_appContext;
    NSMutableDictionary *_jsTimers;
    NSMutableDictionary *_dateFormatterCache;
    id <IKAppDeviceConfig> _deviceConfig;
}

@property (weak, nonatomic) IKAppContext *appContext;
@property (retain, nonatomic) NSMutableDictionary *jsTimers;
@property (retain, nonatomic) NSMutableDictionary *dateFormatterCache;
@property (weak, nonatomic) id <IKAppDeviceConfig> deviceConfig;

- (id)initWithAppContext:(id)arg1 deviceConfig:(id)arg2;
- (void)stopTimers;
- (id)setInterval:(id)arg1 time:(long long)arg2;
- (void)clearInterval:(id)arg1;
- (id)setTimeout:(id)arg1 time:(long long)arg2;
- (void)clearTimeout:(id)arg1;
- (void)clearCookies;
- (id)getCookieForURL:(id)arg1 useSSCookieStorage:(_Bool)arg2;
- (void)setCookie:(id)arg1 useSSCookieStorage:(_Bool)arg2;
- (id)_startTimer:(id)arg1 time:(long long)arg2 repeating:(_Bool)arg3;
- (void)_clearTimer:(id)arg1;
- (void)_jsTimerFired:(id)arg1;
- (id)_stringForKey:(id)arg1 fromDict:(id)arg2;

@end
