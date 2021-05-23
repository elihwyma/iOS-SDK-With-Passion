/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUScriptObject.h>

@class NSNumber, NSString, SSMutableURLRequestProperties;

@interface SUScriptURLRequest : SUScriptObject

{
    SSMutableURLRequestProperties *_requestProperties;
}

@property (copy) NSNumber *timeoutInterval;
@property (copy) NSString *URLBagKey;
@property (copy) id URLs;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)_className;
- (id)attributeKeys;
- (id)scriptAttributeKeys;
- (id)initWithNativeRequestProperties:(id)arg1;
- (id)copyNativeRequestProperties;

@end
