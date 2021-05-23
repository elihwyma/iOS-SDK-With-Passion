/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUScriptObject.h>

@class ACAccountType, NSString;

@interface SUScriptAppleAccountType : SUScriptObject

{
    ACAccountType *_accountType;
}

@property (nonatomic, readonly) ACAccountType *nativeAccountType;
@property (readonly) id accessGranted;
@property (readonly) NSString *accountTypeDescription;
@property (readonly) NSString *identifier;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;

- (void)dealloc;
- (id)_className;
- (id)attributeKeys;
- (id)scriptAttributeKeys;
- (id)initWithACAccountType:(id)arg1;

@end
