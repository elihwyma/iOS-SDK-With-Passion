/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUScriptObject.h>

@class NSError, NSString;

@interface SUScriptError : SUScriptObject

{
    NSError *_error;
}

@property (readonly) long long code;
@property (readonly) NSString *domain;
@property (readonly) NSString *localizedDescription;
@property (readonly) NSString *localizedFailureReason;
@property (readonly) NSString *localizedRecoverySuggestion;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;

- (void)dealloc;
- (id)_className;
- (id)initWithError:(id)arg1;
- (id)attributeKeys;
- (id)scriptAttributeKeys;

@end
