/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSFormatter.h>

@class NSLocale;

@interface NSListFormatter : NSFormatter

{
    struct __CFListFormatter *_listFormatter;
    NSLocale *_locale;
    NSFormatter *_itemFormatter;
}

@property (copy) NSLocale *locale;
@property (copy) NSFormatter *itemFormatter;

+ (id)localizedStringByJoiningStrings:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)stringForObjectValue:(id)arg1;
- (id)initWithLocale:(id)arg1;
- (id)_stringFromStringArray:(id)arg1;
- (struct __CFListFormatter *)_listFormatter;
- (id)stringFromItems:(id)arg1;

@end
