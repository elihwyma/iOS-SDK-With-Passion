/*
 Image: /System/Library/Frameworks/Social.framework/Social
 */

#import <Social/SLGoogleLegacyTokenMigrationResponse.h>

@class NSString;

@interface SLGoogleLegacyTokenMigrationCodeResponse : SLGoogleLegacyTokenMigrationResponse

{
    NSString *_code;
}

@property (readonly) NSString *code;

- (id)initWithData:(id)arg1 urlResponse:(id)arg2 error:(id)arg3;

@end
