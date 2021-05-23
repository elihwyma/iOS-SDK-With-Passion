/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUScriptObject.h>

@class NSDictionary, NSMutableDictionary, NSString, SSMutableURLRequestProperties, SUXMLHTTPRequestOperation, WebScriptObject;

@protocol SUScriptXMLHTTPRequestDelegate;

@interface SUScriptXMLHTTPRequest : SUScriptObject

{
    id <SUScriptXMLHTTPRequestDelegate> _delegate;
    NSMutableDictionary *_functions;
    SUXMLHTTPRequestOperation *_operation;
    unsigned long long _readyState;
    SSMutableURLRequestProperties *_requestProperties;
    NSDictionary *_responseHeaders;
    NSString *_responseText;
    unsigned long long _status;
    NSString *_statusText;
    unsigned long long _timeout;
}

@property (weak) id <SUScriptXMLHTTPRequestDelegate> delegate;
@property (readonly) unsigned long long readyState;
@property (copy, readonly) NSString *responseText;
@property (readonly) unsigned long long status;
@property (copy, readonly) NSString *statusText;
@property unsigned long long timeout;
@property (retain) WebScriptObject *onabort;
@property (retain) WebScriptObject *onerror;
@property (retain) WebScriptObject *onload;
@property (retain) WebScriptObject *onloadend;
@property (retain) WebScriptObject *onreadystatechange;
@property (retain) WebScriptObject *ontimeout;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKeyName:(id)arg1;

- (void)dealloc;
- (id)_className;
- (void)abort;
- (void)setValue:(id)arg1 forHTTPHeaderField:(id)arg2;
- (id)initWithDelegate:(id)arg1;
- (id)attributeKeys;
- (id)getResponseHeader:(id)arg1;
- (id)getAllResponseHeaders;
- (id)scriptAttributeKeys;
- (void)_callFunctionWithName:(id)arg1 arguments:(id)arg2;
- (id)_scriptObjectForFunctionName:(id)arg1;
- (void)_setScriptObject:(id)arg1 forFunctionName:(id)arg2;
- (void)openWithHTTPMethod:(id)arg1 URL:(id)arg2 isAsync:(id)arg3 username:(id)arg4 password:(id)arg5;
- (void)sendWithBodyData:(id)arg1;

@end
