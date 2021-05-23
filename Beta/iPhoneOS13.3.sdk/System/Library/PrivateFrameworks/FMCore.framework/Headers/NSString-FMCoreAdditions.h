/*
 Image: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
 */

#import <Foundation/NSString.h>

@interface NSString (FMCoreAdditions)

- (_Bool)isNumeric;
- (id)legacyAllowedCharacterSet;
- (id)fm_encodeToPercentEscape;
- (id)fm_decodeFromPercentEscape;
- (_Bool)fm_isNumeric;
- (id)fm_decodeHexString;
- (id)fm_wifiToWLAN;
- (id)fm_stringByReplacingNonBreakingSpaces;
- (id)encodeToPercentEscape;
- (id)decodeFromPercentEscape;
- (id)decodeHexString;
- (id)wifiToWLAN;

@end
