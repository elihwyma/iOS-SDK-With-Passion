/*
 Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <Foundation/NSObject.h>

@class AXDialectMap, NSArray, NSString;

@interface AXLangMap : NSObject

{
    _Bool _western;
    _Bool _ambiguous;
    _Bool _rtl;
    AXDialectMap *userLocaleDialect;
    NSArray *_dialects;
    NSString *_generalLanguageID;
    AXDialectMap *_userPreferredDialect;
    NSArray *_alternateLanguageIDs;
    NSArray *_associatedAmbiguousLanguages;
}

@property (nonatomic, getter=isWestern) _Bool western;
@property (nonatomic, getter=isRTL) _Bool rtl;
@property (nonatomic, getter=isAmbiguous) _Bool ambiguous;
@property (copy, nonatomic) NSString *generalLanguageID;
@property (retain, nonatomic) NSArray *alternateLanguageIDs;
@property (retain, nonatomic) NSArray *dialects;
@property (retain, nonatomic) NSArray *associatedAmbiguousLanguages;
@property (nonatomic, readonly) AXDialectMap *defaultDialect;
@property (nonatomic, readonly) AXDialectMap *userLocaleDialect;
@property (weak, nonatomic) AXDialectMap *userPreferredDialect;

- (id)description;
- (id)debugDescription;
- (id)basicDescription;
- (id)initWithLanguageID:(id)arg1 isWestern:(_Bool)arg2 isAmbiguous:(_Bool)arg3 isRTL:(_Bool)arg4 dialects:(id)arg5 alternateLanguageIDs:(id)arg6 associatedAmbiguousLanguages:(id)arg7;
- (id)dialectWithLocaleIdentifier:(id)arg1;

@end
