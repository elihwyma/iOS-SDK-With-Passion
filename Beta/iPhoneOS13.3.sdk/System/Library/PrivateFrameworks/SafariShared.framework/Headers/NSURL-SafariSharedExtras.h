/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSURL.h>

@class NSString;

@interface NSURL (SafariSharedExtras)

@property (nonatomic, readonly) _Bool safari_isBlobURL;
@property (nonatomic, readonly) _Bool safari_isSafariResourceURL;
@property (nonatomic, readonly) _Bool safari_isLocalOrPrivateNetworkURL;
@property (nonatomic, readonly) _Bool safari_isEligibleToShowNotSecureWarning;
@property (nonatomic, readonly) NSURL *safari_canonicalURLForStartPage;
@property (copy, nonatomic, readonly) NSString *safari_simplifiedURLStringForDeduping;
@property (nonatomic, readonly) _Bool safari_isTopLevelURL;
@property (nonatomic, readonly) _Bool safari_isURLTooLongToDisplay;

+ (id)safari_URLWithDataAsString:(id)arg1;
+ (id)safari_URLWithUserTypedString:(id)arg1;
+ (void)safari_enumeratePossibleURLsForUserTypedString:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
+ (id)safari_URLWithDataAsString:(id)arg1 relativeToURL:(id)arg2;

- (id)safari_userVisibleString;
- (id)safari_wellKnownChangePasswordURL;
- (id)safari_originalDataAsString;
- (id)safari_URLByReplacingSchemeWithString:(id)arg1;
- (_Bool)safari_hasScheme:(id)arg1;
- (_Bool)safari_isDataURL;
- (_Bool)safari_hasSameOriginAsURL:(id)arg1;
- (id)safari_userVisibleHostWithoutWWWSubdomain;
- (_Bool)safari_isHTTPFamilyURL;
- (id)safari_userVisibleHost;
- (id)safari_userVisibleStringConsideringLongURLs;
- (_Bool)safari_hasUserOrPassword;
- (id)safari_URLByDeletingUserAndPassword;
- (_Bool)safari_isWellKnownChangePasswordURL;
- (_Bool)safari_isMailtoURL;
- (id)safari_URLByRemovingUserAndPath;
- (id)safari_relativePathToURL:(id)arg1;
- (id)safari_URLWithUniqueFilename;
- (id)safari_URLByReplacingHostWithString:(id)arg1;
- (_Bool)safari_shouldBeAssociatedWithFaviconFromRedirectedURL:(id)arg1;
- (_Bool)safari_isHTTPURL;
- (id)safari_canonicalURL;
- (id)safari_path;
- (_Bool)safari_hasLocalScheme;
- (_Bool)safari_hasCharactersBeyondPath;
- (id)safari_displayNameWithTitle:(id)arg1;

@end
