/*
 Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface _CLKTimeFormatterCache : NSObject

{
    NSMutableDictionary *_timeOnlyFormatters;
    NSMutableDictionary *_timeAndDesignatorFormatters;
    NSMutableDictionary *_timeAndDesignatorFormattersSuppressingWhitespace;
}

+ (id)sharedInstance;
+ (id)timeZoneName:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)_invalidateFormatters;
- (id)timeOnlyFormatterForTimeZone:(id)arg1 hasSeconds:(_Bool)arg2 forcesLatinNumbers:(_Bool)arg3;
- (id)timeAndDesignatorFormatterForTimeZone:(id)arg1 suppressWhitespace:(_Bool)arg2 forcesLatinNumbers:(_Bool)arg3;

@end
