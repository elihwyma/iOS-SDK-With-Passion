/*
 Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface MapsSuggestionsMeCard : NSObject

{
    struct NSDictionary *_perCNPostalAddress;
    _Bool _hasCorrected;
    _Bool _hasGeocoded;
    _Bool _hasHomeOrWork;
    struct NSArray *_shortcutsForHome;
    struct NSArray *_shortcutsForWork;
    struct NSArray *_hiddenShortcutsForHome;
    struct NSArray *_hiddenShortcutsForWork;
    struct NSArray *_shortcutsForAll;
    struct NSArray *_mapItemsForHome;
    struct NSArray *_mapItemsForWork;
    struct NSArray *_mapItemsForAll;
}

@property (nonatomic, readonly) NSArray *shortcutsForHome;
@property (nonatomic, readonly) NSArray *shortcutsForWork;
@property (nonatomic, readonly) NSArray *hiddenShortcutsForHome;
@property (nonatomic, readonly) NSArray *hiddenShortcutsForWork;
@property (nonatomic, readonly) NSArray *shortcutsForAll;
@property (nonatomic, readonly) NSArray *mapItemsForHome;
@property (nonatomic, readonly) NSArray *mapItemsForWork;
@property (nonatomic, readonly) NSArray *mapItemsForAll;
@property (nonatomic, readonly) _Bool hasCorrected;
@property (nonatomic, readonly) _Bool hasGeocoded;
@property (nonatomic, readonly) _Bool hasHomeOrWork;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithShortcuts:(struct NSArray *)arg1 perCNPostalAddress:(struct NSDictionary *)arg2 hasCorrected:(_Bool)arg3 hasGeocoded:(_Bool)arg4;
- (_Bool)isEqualToMeCard:(id)arg1;
- (id)shortcutForCNPostalAddressIdentifier:(id)arg1;
- (struct NSDictionary *)shortcutsPerCNPostalAddress;
- (id)initWithHomes:(struct NSArray *)arg1 works:(struct NSArray *)arg2 hiddenHomes:(struct NSArray *)arg3 hiddenWorks:(struct NSArray *)arg4 all:(struct NSArray *)arg5 perCNPostalAddress:(struct NSDictionary *)arg6 hasCorrect:(_Bool)arg7 hasGeocoded:(_Bool)arg8;
- (id)initWithShortcuts:(struct NSArray *)arg1 hasCorrected:(_Bool)arg2 hasGeocoded:(_Bool)arg3;

@end
