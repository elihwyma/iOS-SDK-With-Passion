/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSString.h>

@class NSArray;

@interface NSString (NSAttributedString_PhotosUICore)

@property (nonatomic, readonly) NSString *px_stringConvertedToHTMLString;
@property (nonatomic, readonly) long long px_platformAgnosticHash;
@property (nonatomic, readonly) NSString *px_stringByIndentingNewLines;
@property (nonatomic, readonly) struct _NSRange px_firstLetterRange;
@property (nonatomic, readonly) NSArray *px_integerValues;
@property (nonatomic, readonly) _Bool px_endsWithFullStopOrEquivalentPunctuationMark;

- (long long)digits;
- (_Bool)containsDigits;
- (struct _NSRange)rangeOfDigits;
- (id)stringByRemovingDigits;
- (id)px_stringByApplyingCapitalization:(long long)arg1;
- (_Bool)px_hasPrefixIgnoringCaseAndDiacritics:(id)arg1;
- (_Bool)px_hasStringIgnoringCaseAndDiacritics:(id)arg1;
- (id)px_stringByDeletingCharactersInSet:(id)arg1;

@end
