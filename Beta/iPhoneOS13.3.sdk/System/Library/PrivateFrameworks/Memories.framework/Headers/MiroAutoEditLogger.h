/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

@class NSMutableString, NSRegularExpression;

__attribute__((visibility("hidden")))
@interface MiroAutoEditLogger : NSObject

{
    _Bool _logsToConsole;
    NSMutableString *_log;
    long long _loggingLevel;
    long long _indentationLevel;
    NSRegularExpression *_framesRegex;
    long long _disableLoggingCount;
}

@property (retain, nonatomic) NSMutableString *log;
@property (nonatomic) long long loggingLevel;
@property (nonatomic) long long indentationLevel;
@property (retain, nonatomic) NSRegularExpression *framesRegex;
@property (nonatomic) long long disableLoggingCount;
@property (nonatomic) _Bool logsToConsole;

- (id)init;
- (void)commit;
- (void)disableLogging;
- (void)enableLogging;
- (void)logAndDescribeFrameCounts:(_Bool)arg1 level:(long long)arg2 formatString:(id)arg3;
- (void)incrementIndentationLevel;
- (void)decrementIndentationLevel;

@end
