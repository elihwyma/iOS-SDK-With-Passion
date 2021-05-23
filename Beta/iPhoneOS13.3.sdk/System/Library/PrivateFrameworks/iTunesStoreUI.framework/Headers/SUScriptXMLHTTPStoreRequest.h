/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUScriptObject.h>

@class ISDataProvider, NSDictionary, NSMutableDictionary, NSString, SSAuthenticationContext, SSMutableURLRequestProperties, SUXMLHTTPStoreRequestOperation, WebScriptObject;

@protocol SUScriptXMLHTTPStoreRequestDelegate;

@interface SUScriptXMLHTTPStoreRequest : SUScriptObject

{
    id <SUScriptXMLHTTPStoreRequestDelegate> _delegate;
    NSMutableDictionary *_functions;
    SUXMLHTTPStoreRequestOperation *_operation;
    unsigned long long _readyState;
    SSMutableURLRequestProperties *_requestProperties;
    NSDictionary *_responseHeaders;
    NSString *_responseText;
    _Bool _shouldSendGUIDHeader;
    unsigned long long _status;
    NSString *_statusText;
    unsigned long long _timeout;
    _Bool _useJSONEncoding;
    SSAuthenticationContext *_authenticationContext;
    ISDataProvider *_dataProvider;
}

@property (weak) id <SUScriptXMLHTTPStoreRequestDelegate> delegate;
@property (retain, nonatomic) SSAuthenticationContext *authenticationContext;
@property (retain, nonatomic) ISDataProvider *dataProvider;
@property (retain, getter=isJSONEncoded) id JSONEncoded;
@property (readonly) unsigned long long readyState;
@property (copy, readonly) NSString *responseText;
@property (retain) id shouldSendGUIDHeader;
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
- (id)_uniqueDeviceID;
- (id)_className;
- (void)abort;
- (void)setValue:(id)arg1 forHTTPHeaderField:(id)arg2;
- (id)initWithDelegate:(id)arg1;
- (id)attributeKeys;
- (id)getResponseHeader:(id)arg1;
- (id)getAllResponseHeaders;
- (id)scriptAttributeKeys;
- (void)_callFunctionWithName:(id)arg1 arguments:(id)arg2;
- (id)_gsTokenForAIDAAccount:(id)arg1 accountStore:(id)arg2;
- (id)_clientInfoHeader;
- (id)_scriptObjectForFunctionName:(id)arg1;
- (void)_setScriptObject:(id)arg1 forFunctionName:(id)arg2;
- (void)openWithHTTPMethod:(id)arg1 URL:(id)arg2 isAsync:(id)arg3 username:(id)arg4 password:(id)arg5;
- (void)sendWithBodyData:(id)arg1;

@end
