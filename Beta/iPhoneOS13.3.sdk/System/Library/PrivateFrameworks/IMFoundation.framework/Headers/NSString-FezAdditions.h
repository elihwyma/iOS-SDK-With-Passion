/*
 Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import <Foundation/NSString.h>

@interface NSString (FezAdditions)

@property (nonatomic, readonly) NSString *mobileMeDomain;
@property (nonatomic, readonly) _Bool hasMobileMeSuffix;
@property (nonatomic, readonly) NSString *stripMobileMSuffixIfPresent;

+ (id)copyStringGUID;
+ (id)copyStringGUIDForObject:(id)arg1;
+ (id)stringGUID;
+ (id)stringGUIDForObject:(id)arg1;
+ (id)randomString;
+ (id)generatedRoomNameForGroupChat;

- (unsigned int)unsignedIntValue;
- (_Bool)isDirectory;
- (id)_stripFZIDPrefix;
- (_Bool)isEqualToIgnoringCase:(id)arg1;
- (_Bool)_appearsToBeBusinessID;
- (id)trimmedString;
- (id)stringByRemovingURLEscapes;
- (long long)_FZBestGuessFZIDType;
- (id)_URIFromFZIDType:(long long)arg1;
- (id)_URIFromBusinessID;
- (id)_URIFromCanonicalizedFZIDType:(long long)arg1;
- (_Bool)_appearsToBePhoneNumber;
- (_Bool)_appearsToBeEmail;
- (_Bool)_appearsToBeDSID;
- (id)_URIFromCanonicalizedPhoneNumber;
- (id)_URIFromCanonicalizedEmail;
- (id)_URIFromCanonicalizedDSID;
- (id)_URIFromCanonicalizedBusinessID;
- (id)_URIFromPhoneNumber;
- (id)_URIFromEmail;
- (id)_URIFromDSID;
- (id)_FZIDFromPhoneNumber;
- (id)_FZIDFromEmail;
- (id)stringByRemovingCharactersFromSet:(id)arg1;
- (id)__stringByStrippingAttachmentAndControlCharacters;
- (unsigned int)hexValue;
- (long long)localizedCompareToString:(id)arg1;
- (id)stringByAddingURLEscapes;
- (id)urlFromString;
- (long long)_FZIDType;
- (id)_bestGuessURI;
- (id)_bestGuessURIFromCanicalizedID;
- (id)_IDFromFZIDType:(long long)arg1;
- (id)_stripPotentialTokenURIWithToken:(id *)arg1;
- (id)_md5Hash;
- (id)stringByResolvingAndStandardizingPath;
- (struct _NSRange)__rangeOfNewlineInRange:(struct _NSRange)arg1;
- (id)stringByRemovingWhitespace;
- (id)uniqueSavePath;
- (id)__stringByStrippingControlCharacters;
- (id)pathStringForDisplay;
- (id)stringWithLTREmbedding;
- (_Bool)roomNameIsProbablyAutomaticallyGenerated;
- (id)_imInitWithFormat:(id)arg1 arguments:(char *)arg2;

@end
