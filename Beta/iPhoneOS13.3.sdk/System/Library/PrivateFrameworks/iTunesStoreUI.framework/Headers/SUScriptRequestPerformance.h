/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUScriptObject.h>

@class ISURLRequestPerformance, NSString;

@interface SUScriptRequestPerformance : SUScriptObject

{
    ISURLRequestPerformance *_performance;
}

@property (readonly) double finishInterval;
@property (readonly) NSString *JSONHeaders;
@property (readonly) double receivedResponseInterval;
@property (readonly) double renderBeginInterval;
@property (readonly) double renderEndInterval;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;

- (void)dealloc;
- (id)_className;
- (id)attributeKeys;
- (id)scriptAttributeKeys;
- (id)initWithRequestPerformance:(id)arg1;

@end
