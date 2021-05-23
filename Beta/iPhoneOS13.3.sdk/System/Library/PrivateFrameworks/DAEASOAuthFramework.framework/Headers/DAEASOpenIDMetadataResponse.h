/*
 Image: /System/Library/PrivateFrameworks/DAEASOAuthFramework.framework/DAEASOAuthFramework
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSError, NSString;

@interface DAEASOpenIDMetadataResponse : NSObject

{
    NSString *_tokenRequestURI;
    NSDictionary *_data;
    long long _statusCode;
    NSError *_error;
    NSString *_errorMessage;
}

@property (nonatomic, readonly) NSString *tokenRequestURI;
@property (nonatomic, readonly) NSDictionary *data;
@property (nonatomic, readonly) long long statusCode;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) NSString *errorMessage;

- (id)initWithData:(id)arg1 urlResponse:(id)arg2 error:(id)arg3;

@end
