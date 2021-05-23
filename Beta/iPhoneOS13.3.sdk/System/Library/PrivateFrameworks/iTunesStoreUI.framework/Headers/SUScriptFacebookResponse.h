/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUScriptObject.h>

@class NSString, SUScriptError;

@interface SUScriptFacebookResponse : SUScriptObject

{
    NSString *_bodyData;
    SUScriptError *_error;
    long long _statusCode;
}

@property (readonly) NSString *bodyData;
@property (readonly) SUScriptError *error;
@property (readonly) long long HTTPStatusCode;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;

- (void)dealloc;
- (id)_className;
- (id)attributeKeys;
- (id)scriptAttributeKeys;
- (id)initWithData:(id)arg1 response:(id)arg2 error:(id)arg3;

@end
