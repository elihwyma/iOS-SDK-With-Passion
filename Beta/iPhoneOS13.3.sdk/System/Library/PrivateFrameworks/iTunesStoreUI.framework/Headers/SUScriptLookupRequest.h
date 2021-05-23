/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUScriptObject.h>

@class NSString, SSLookupRequest;

@interface SUScriptLookupRequest : SUScriptObject

{
    SSLookupRequest *_request;
}

@property (retain) id authenticatesIfNeeded;
@property (copy) NSString *keyProfile;
@property long long localizationStyle;
@property (readonly) long long localizationStyleDevice;
@property (readonly) long long localizationStyleServer;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKeyName:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)_className;
- (id)attributeKeys;
- (void)setValue:(id)arg1 forRequestParameter:(id)arg2;
- (id)valueForRequestParameter:(id)arg1;
- (id)scriptAttributeKeys;
- (void)startWithLookupFunction:(id)arg1;

@end
