/*
 Image: /System/Library/PrivateFrameworks/URLFormatting.framework/URLFormatting
 */

#import <Foundation/NSURL.h>

@interface NSURL (LPExtras)

+ (id)_lp_URLWithData:(id)arg1 baseURL:(id)arg2;
+ (id)_lp_URLWithUserTypedString:(id)arg1 relativeToURL:(id)arg2;

- (id)_lp_simplifiedDisplayString;
- (_Bool)_lp_userVisibleStringUsesEncodedHost;
- (_Bool)_lp_isHTTPFamilyURL;
- (id)_lp_simplifiedStringForDisplayOnly:(_Bool)arg1;
- (id)_lp_highLevelDomain;
- (id)_lp_userVisibleString;
- (id)_lp_originalData;

@end
