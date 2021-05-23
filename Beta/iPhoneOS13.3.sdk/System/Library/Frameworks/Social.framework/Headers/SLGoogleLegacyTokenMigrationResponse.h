/*
 Image: /System/Library/Frameworks/Social.framework/Social
 */

#import <Foundation/NSObject.h>

@class NSError, NSString;

@interface SLGoogleLegacyTokenMigrationResponse : NSObject

{
    long long _statusCode;
    NSError *_error;
    NSString *_responseBody;
}

@property (readonly) long long statusCode;
@property (readonly) NSError *error;
@property (readonly) NSString *responseBody;

- (id)initWithData:(id)arg1 urlResponse:(id)arg2 error:(id)arg3;

@end
