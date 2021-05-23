/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface CNCollation : NSObject

{
    _Bool _indexExtraTokenizations;
    NSArray *_headerLanguages;
    NSArray *_indexSections;
    NSString *_searchTransform;
    NSString *_nameTransform;
    NSString *_searchCollatorIdentifier;
    NSString *_sortCollatorIdentifier;
}

@property (readonly) NSArray *headerLanguages;
@property (readonly) NSArray *indexSections;
@property (readonly) NSString *searchTransform;
@property (readonly) NSString *nameTransform;
@property (readonly) NSString *searchCollatorIdentifier;
@property (readonly) NSString *sortCollatorIdentifier;
@property (readonly) _Bool indexExtraTokenizations;

+ (id)sectionURL;
+ (id)indexSectionsFromPropertyList:(id)arg1;
+ (id)languageHeaderSectionsFromPropertyList:(id)arg1 collator:(struct UCollator *)arg2;
+ (id)defaultSortCollatorIdentifier;

- (id)init;
- (id)initWithCollator:(struct UCollator *)arg1;
- (id)initWithCollator:(struct UCollator *)arg1 URL:(id)arg2;

@end
