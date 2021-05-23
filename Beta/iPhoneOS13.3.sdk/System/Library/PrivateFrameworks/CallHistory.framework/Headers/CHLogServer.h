/*
 Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

#import <CallHistory/CHSynchronizable.h>

__attribute__((visibility("hidden")))
@interface CHLogServer : CHSynchronizable

{
    struct unordered_map<const char *, os_log_s *, std::__1::hash<const char *>, std::__1::equal_to<const char *>, std::__1::allocator<std::__1::pair<const char *const, os_log_s *>>> fLogHandles;
}

+ (id)instance;

- (id)init;
- (id).cxx_construct;
- (struct os_log_s *)logHandleForDomain:(const char *)arg1;
- (struct os_log_s *)logHandleForDomainSync:(const char *)arg1;
- (void)createLogHandleForDomainSync:(const char *)arg1;

@end
