/*
 Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

#import <Foundation/NSObject.h>

@interface CHLogger : NSObject

{
    struct os_log_s *_logHandle;
}

- (id)initWithDomain:(const char *)arg1;
- (struct os_log_s *)logHandle;

@end
