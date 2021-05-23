/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SFUserNotification : NSObject

{
    struct __CFUserNotification *_cfNotification;
    struct __CFRunLoopSource *_cfRunloopSource;
    NSString *_domain;
    NSString *_bundleID;
    CDUnknownBlockType _completionBlock;
}

@property (copy, nonatomic) CDUnknownBlockType completionBlock;

- (void)dealloc;
- (void)cancel;
- (id)initWithDomain:(id)arg1 appBundleID:(id)arg2;
- (void)scheduleWithCompletionBlock:(CDUnknownBlockType)arg1;

@end
