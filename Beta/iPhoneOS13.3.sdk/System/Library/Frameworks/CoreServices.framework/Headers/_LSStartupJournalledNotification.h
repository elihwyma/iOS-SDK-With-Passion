/*
 Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

#import <NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _LSStartupJournalledNotification : NSObject

{
    _Bool _plugins;
    int _notification;
    NSArray *_proxies;
}

@property (nonatomic, readonly) int notification;
@property (nonatomic, readonly) NSArray *proxies;
@property (nonatomic, readonly) _Bool plugins;

- (id)initWithNotification:(int)arg1 appProxies:(id)arg2 plugins:(_Bool)arg3;

@end
