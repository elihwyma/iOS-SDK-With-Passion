/*
 Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

#import <Foundation/NSCoder.h>

@class FPXPCSanitizer;

@interface NSCoder (Sanitization)

@property (nonatomic, readonly) FPXPCSanitizer *fp_sanitizer;

- (_Bool)fp_checkProviderIdentifier:(id)arg1;

@end
