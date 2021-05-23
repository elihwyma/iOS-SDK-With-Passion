/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

@class NSArray, NSLocale, NSPersonNameComponentsFormatter, NSSet;

__attribute__((visibility("hidden")))
@interface _NSPersonNameComponentsStyleFormatter : NSObject

{
    NSSet *_abbreviatedKeys;
    _NSPersonNameComponentsStyleFormatter *_fallbackStyleFormatter;
    NSSet *_keysOfInterest;
    _Bool _shouldFallBack;
    _Bool _isEnabled;
    long long _ordering;
    NSLocale *_locale;
    NSArray *_orderedTemplate;
    NSArray *_fallbackDescriptor;
    NSPersonNameComponentsFormatter *_masterFormatter;
}

@property (readonly) NSSet *abbreviatedKeys;
@property (readonly) NSSet *keysOfInterest;
@property (readonly) NSArray *orderedTemplate;
@property (readonly) NSArray *orderedKeysOfInterest;
@property long long ordering;
@property (readonly) _Bool shouldFallBack;
@property (readonly) _Bool isEnabled;
@property (readonly) _Bool shouldIgnoreComponentsContainingSpecialCharacters;
@property (retain) _NSPersonNameComponentsStyleFormatter *fallbackStyleFormatter;
@property (copy, readonly) NSArray *fallbackDescriptor;
@property (copy, readonly) NSPersonNameComponentsFormatter *masterFormatter;

- (void)dealloc;
- (id)_orderedNonEmptyKeysFromComponents:(id)arg1;
- (_Bool)fullComponentsAreValid:(id)arg1;
- (id)_formattedStringFromOrderedKeys:(id)arg1 components:(id)arg2 attributesByRange:(id)arg3;
- (id)stringFromComponents:(id)arg1 attributesByRange:(id)arg2;
- (id)_delimiterBetweenString:(id)arg1 andString:(id)arg2 isPhonetic:(_Bool)arg3;
- (void)_releaseIvars;
- (id)initWithMasterFormatter:(id)arg1;
- (id)annotatedStringFromPersonNameComponents:(id)arg1;

@end
