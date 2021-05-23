/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUScriptObject.h>

@class NSDateFormatter, NSString;

@interface SUScriptDateFormatter : SUScriptObject

{
    NSDateFormatter *_dateFormatter;
}

@property (copy) NSString *dateFormat;
@property unsigned long long dateStyle;
@property (copy) NSString *localeIdentifier;
@property unsigned long long timeStyle;
@property (readonly) unsigned long long dateFormatterFullStyle;
@property (readonly) unsigned long long dateFormatterLongStyle;
@property (readonly) unsigned long long dateFormatterMediumStyle;
@property (readonly) unsigned long long dateFormatterNoStyle;
@property (readonly) unsigned long long dateFormatterShortStyle;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKeyName:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)stringFromDate:(id)arg1;
- (double)dateFromString:(id)arg1;
- (id)_className;
- (id)attributeKeys;
- (id)scriptAttributeKeys;

@end
