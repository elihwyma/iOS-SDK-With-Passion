/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

#import <GeoServices/Swift-Protocol.h>

@class GEOFeatureStyleAttributes, GEOPDAutocompleteEntry, GEOPDBrowseCategory, NSArray, NSData, NSString, NSURL;

@protocol GEOVenueIdentifier;

@interface GEOSearchCategory : NSObject <Swift>

{
    GEOPDBrowseCategory *_browseCategory;
    GEOPDAutocompleteEntry *_autocompleteEntry;
    NSArray *_subcategories;
}

@property (nonatomic, readonly, getter=_suggestionEntryMetadata) NSData *suggestionEntryMetadata;
@property (nonatomic, readonly, getter=_autocompleteEntry) GEOPDAutocompleteEntry *autocompleteEntry;
@property (nonatomic, readonly) NSString *displayString;
@property (nonatomic, readonly) NSString *shortDisplayString;
@property (nonatomic, readonly) NSString *popularTokenString;
@property (nonatomic, readonly) GEOFeatureStyleAttributes *styleAttributes;
@property (nonatomic, readonly) NSArray *subcategories;
@property (nonatomic, readonly) id <GEOVenueIdentifier> venueIdentifier;
@property (nonatomic, readonly) int displayMode;
@property (nonatomic, readonly) int sortOrder;
@property (nonatomic, readonly) int subCategoryType;
@property (nonatomic, readonly, getter=isSubCategorySameAsTopLevel) _Bool subCategorySameAsTopLevel;
@property (nonatomic, readonly) NSURL *mapsURL;

+ (_Bool)supportsSecureCoding;
+ (id)categoryForURL:(id)arg1;
+ (void)sendFeedbackForVisibleCategories:(id)arg1;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStorage:(id)arg1;
- (id)initWithBrowseCategory:(id)arg1;
- (id)initWithAutocompleteEntry:(id)arg1;
- (void)sendFeedback;
- (id)serverMetadata;
- (id)_browseCategory;

@end
