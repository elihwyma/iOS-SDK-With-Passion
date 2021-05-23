/*
 Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface SCRCWebDateTimeParser : NSObject

{
    NSMutableDictionary *_expressions;
    NSMutableDictionary *_dateFormats;
}

+ (id)sharedInstance;

- (id)init;
- (id)_expressionForRule:(id)arg1;
- (id)_cachedDateFormatterForFormat:(id)arg1;
- (id)_handleDuration:(id)arg1;
- (id)_handleTimes:(id)arg1;
- (id)_handleDatesAndTimes:(id)arg1;
- (id)spokenStringForDateTimeAttribute:(id)arg1;

@end
