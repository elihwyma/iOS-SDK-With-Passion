/*
 Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

#import <SpringBoardHome/SBLeafIcon.h>

@class SFSearchResult, SearchUIAppIconImage;

@interface SearchUIAppIcon : SBLeafIcon

{
    SFSearchResult *_searchResult;
    unsigned long long _variant;
    SearchUIAppIconImage *_iconImage;
}

@property (nonatomic, readonly) SFSearchResult *searchResult;
@property (nonatomic, readonly) unsigned long long variant;
@property (retain, nonatomic) SearchUIAppIconImage *iconImage;

+ (_Bool)canGenerateIconsInBackground;
+ (_Bool)isPlaceholderIcon;

- (_Bool)isEqual:(id)arg1;
- (id)uniqueIdentifier;
- (id)initWithSearchResult:(id)arg1 variant:(unsigned long long)arg2;
- (void)applicationWithBundleIdentifierDidChangeIconAccessories:(id)arg1;
- (void)iconDidChange;

@end
