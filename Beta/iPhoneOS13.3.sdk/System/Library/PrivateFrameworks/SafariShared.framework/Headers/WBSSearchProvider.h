/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

#import <SafariShared/Swift-Protocol.h>

@class NSArray, NSDictionary, NSString, WBSOpenSearchURLTemplate, WBSURLSuffixChecker;

@interface WBSSearchProvider : NSObject <Swift>

{
    WBSURLSuffixChecker *_suffixChecker;
    NSString *_queryKey;
    _Bool _usesSearchTermsFromFragment;
    NSString *_shortName;
    WBSOpenSearchURLTemplate *_searchURLTemplate;
    WBSOpenSearchURLTemplate *_safeSearchURLTemplate;
    NSDictionary *_safeSearchURLQueryParameters;
    WBSOpenSearchURLTemplate *_suggestionsURLTemplate;
    NSArray *_hostSuffixes;
    NSArray *_pathPrefixes;
}

@property (copy, nonatomic, readonly) NSString *shortName;
@property (nonatomic, readonly) WBSOpenSearchURLTemplate *searchURLTemplate;
@property (nonatomic, readonly) WBSOpenSearchURLTemplate *safeSearchURLTemplate;
@property (copy, nonatomic, readonly) NSDictionary *safeSearchURLQueryParameters;
@property (nonatomic, readonly) WBSOpenSearchURLTemplate *suggestionsURLTemplate;
@property (copy, nonatomic, readonly) NSArray *hostSuffixes;
@property (copy, nonatomic, readonly) NSArray *pathPrefixes;
@property (nonatomic, readonly) _Bool usesSearchTermsFromFragment;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)urlIsValidSearch:(id)arg1;
- (id)safeSearchURLForSearchURL:(id)arg1;
- (id)initWithShortName:(id)arg1 searchURLTemplate:(id)arg2 safeSearchURLTemplate:(id)arg3 safeSearchURLQueryParameters:(id)arg4 usesSearchTermsFromFragment:(_Bool)arg5 suggestionsURLTemplate:(id)arg6 hostSuffixes:(id)arg7 pathPrefixes:(id)arg8;
- (_Bool)searchShouldUseSafeSearchTemplate;
- (id)userVisibleQueryFromSearchURL:(id)arg1 allowQueryThatLooksLikeURL:(_Bool)arg2;
- (id)searchURLForUserTypedString:(id)arg1;
- (id)suggestionsURLForUserTypedString:(id)arg1;
- (id)userVisibleQueryFromSearchURL:(id)arg1;
- (id)urlAttributingToSafariIfValidSearchURL:(id)arg1;

@end
