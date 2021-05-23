/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUScriptObject.h>

@class NSString, SSMetricsController;

@interface SUScriptMetricsController : SUScriptObject

{
    SSMetricsController *_metricsController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKeyName:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)_className;
- (id)attributeKeys;
- (id)scriptAttributeKeys;
- (void)bagDidChange:(id)arg1;
- (void)_configureWithBagDictionary:(id)arg1;
- (void)flushUnreportedEventsWithCompletionFunction:(id)arg1;
- (void)recordEventWithTopic:(id)arg1 properties:(id)arg2 completionFunction:(id)arg3;

@end
