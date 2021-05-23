/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUScriptObject.h>

@class NSNumberFormatter, NSString;

@interface SUScriptNumberFormatter : SUScriptObject

{
    NSNumberFormatter *_numberFormatter;
}

@property (retain) NSString *localeIdentifier;
@property (retain) NSString *style;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKeyName:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)stringFromNumber:(id)arg1;
- (id)numberFromString:(id)arg1;
- (id)attributeKeys;
- (id)scriptAttributeKeys;

@end
