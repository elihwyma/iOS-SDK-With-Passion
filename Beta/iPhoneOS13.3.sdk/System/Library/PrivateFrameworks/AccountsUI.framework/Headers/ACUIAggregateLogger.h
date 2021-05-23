/*
 Image: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface ACUIAggregateLogger : NSObject

+ (id)_aggregateDictionaryKeyForDataclass:(id)arg1 accountType:(id)arg2 enabled:(_Bool)arg3;
+ (void)logDataclass:(id)arg1 wasEnabledOnAccountOfType:(id)arg2;
+ (void)logDataclass:(id)arg1 wasDisabledOnAccountOfType:(id)arg2;

@end
