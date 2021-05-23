/*
 Image: /System/Library/Frameworks/Social.framework/Social
 */

#import <Social/SLGoogleLegacyTokenMigrationResponse.h>

@class NSString;

@interface SLGoogleLegacyTokenMigrationTokenResponse : SLGoogleLegacyTokenMigrationResponse

{
    NSString *_token;
    NSString *_errorMessage;
}

@property (readonly) NSString *token;
@property (readonly) NSString *errorMessage;

- (id)initWithData:(id)arg1 urlResponse:(id)arg2 error:(id)arg3;

@end
