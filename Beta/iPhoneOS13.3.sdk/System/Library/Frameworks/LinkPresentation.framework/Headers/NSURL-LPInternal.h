/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

#import <Foundation/NSURL.h>

@interface NSURL (LPInternal)

- (_Bool)_lp_isHTTPFamilyOrLinkPresentationTestingURL;
- (_Bool)_lp_hasAllowedNonHTTPScheme;
- (id)_lp_componentsNoCopy;
- (_Bool)_lp_isTelephoneURL;
- (id)_lp_formattedTelephoneNumber;
- (id)_lp_components;
- (id)_lp_pathComponentAtIndex:(unsigned long long)arg1;
- (id)_lp_valueForQueryKey:(id)arg1;

@end
