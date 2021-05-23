/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUScriptObject.h>

@class NSArray, NSString, SUScriptURLRequest;

@interface SUScriptProtocol : SUScriptObject

@property (retain) NSArray *allowedOrientations;
@property (readonly) NSString *clientIdentifier;
@property (retain) NSString *copyright;
@property _Bool excludeFromNavigationHistory;
@property (retain) SUScriptURLRequest *overlayBackgroundURLRequest;
@property (readonly) NSString *protocolVersion;
@property _Bool shouldShowInOverlay;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;

- (id)_className;
- (id)attributeKeys;
- (id)scriptAttributeKeys;
- (id)_copyProtocol;
- (void)_setProtocol:(id)arg1;
- (id)_webThreadValueForProtocolKey:(id)arg1;
- (void)_setValue:(id)arg1 forProtocolKey:(id)arg2;
- (void)setValuesFromDictionary:(id)arg1;

@end
