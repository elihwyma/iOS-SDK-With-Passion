/*
 Image: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
 */

#import <Foundation/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface OSLogEventBacktrace : NSObject

{
    NSArray *_frames;
}

@property (nonatomic, readonly) NSArray *frames;

- (void)dealloc;
- (id)initWithBacktrace:(struct os_log_backtrace_s *)arg1;
- (id)initWithSingleFrame:(id)arg1;

@end
