/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <Foundation/NSString.h>

@interface NSString (BRCBookmarkAdditions)

+ (void)brc_addForcedPackageExtension:(id)arg1;
+ (id)bookmarkDataWithItemResolutionString:(id)arg1 serverZoneName:(id)arg2 ownerName:(id)arg3 accountID:(id)arg4 salted:(_Bool)arg5;
+ (id)brc_hexadecimalStringWithBytes:(const char *)arg1 length:(unsigned long long)arg2;
+ (void)brc_loadForcedPackageExtensions;
+ (void)_t_brc_removeForcedPackageExtension:(id)arg1;

- (_Bool)brc_isBlacklistedPackageExtension;
- (_Bool)brc_isForcedPackageExtension;
- (id)brc_SHA1WithSalt:(id)arg1;
- (id)brc_SHA256;
- (id)brc_mangledNameFromURLFragment:(_Bool)arg1;

@end
