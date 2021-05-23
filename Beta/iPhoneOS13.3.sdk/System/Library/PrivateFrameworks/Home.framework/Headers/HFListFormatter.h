/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSFormatter.h>

@class NSLocale;

@interface HFListFormatter : NSFormatter

{
    NSLocale *_locale;
    unsigned long long _listStyle;
    struct UListFormatter *_formatter;
}

@property (nonatomic) struct UListFormatter *formatter;
@property (nonatomic) unsigned long long listStyle;
@property (copy, nonatomic) NSLocale *locale;

- (void)dealloc;
- (id)stringForObjectValue:(id)arg1;
- (void)_invaildateFormatter;
- (id)_formatOrListWithElements:(id)arg1;
- (id)_formatAndListWithElements:(id)arg1;

@end
