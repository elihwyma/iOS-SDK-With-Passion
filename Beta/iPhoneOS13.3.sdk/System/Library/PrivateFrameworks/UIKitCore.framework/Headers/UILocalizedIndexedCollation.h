/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSLocale, NSString;

@interface UILocalizedIndexedCollation : NSObject

{
    NSLocale *_locale;
    NSArray *_sectionTitles;
    NSArray *_sectionStartStrings;
    NSArray *_sectionIndexTitles;
    NSArray *_sectionIndexMapping;
    NSString *_transform;
    NSString *_firstSectionStartString;
    NSString *_lastSectionStartString;
    struct __CFStringTokenizer *_tokenizer;
}

@property (nonatomic, readonly) NSArray *sectionTitles;
@property (nonatomic, readonly) NSArray *sectionIndexTitles;

+ (id)collationWithDictionary:(id)arg1;
+ (id)currentCollation;

- (void)dealloc;
- (id)initWithDictionary:(id)arg1;
- (struct __CFStringTokenizer *)tokenizer;
- (id)transformedCollationStringForString:(id)arg1;
- (long long)sectionForSectionIndexTitleAtIndex:(long long)arg1;
- (long long)sectionForObject:(id)arg1 collationStringSelector:(SEL)arg2;
- (id)sortedArrayFromArray:(id)arg1 collationStringSelector:(SEL)arg2;

@end
