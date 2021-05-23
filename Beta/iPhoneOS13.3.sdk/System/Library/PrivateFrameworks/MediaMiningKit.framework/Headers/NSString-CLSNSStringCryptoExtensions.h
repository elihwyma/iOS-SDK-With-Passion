/*
 Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

#import <Foundation/NSString.h>

@interface NSString (CLSNSStringCryptoExtensions)

+ (id)cls_generateUUID;

- (id)cls_sha1HashData;
- (id)cls_sha1HashString;
- (id)cls_normalizedString;
- (id)cls_indentBy:(unsigned long long)arg1;
- (id)clsBetterComponentsSeparatedByCharactersInSet:(id)arg1;

@end
