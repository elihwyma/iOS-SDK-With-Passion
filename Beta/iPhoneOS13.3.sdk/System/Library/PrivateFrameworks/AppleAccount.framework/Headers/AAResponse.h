/*
 Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import <Foundation/NSObject.h>

@class NSData, NSDictionary, NSError, NSHTTPURLResponse, NSNumber, NSString;

@interface AAResponse : NSObject

{
    NSDictionary *_responseDictionary;
    NSHTTPURLResponse *_httpResponse;
    NSError *_error;
    long long _statusCode;
    NSData *_data;
    NSNumber *_maxAge;
}

@property (nonatomic, readonly) NSHTTPURLResponse *httpResponse;
@property (nonatomic, readonly) NSDictionary *responseDictionary;
@property (retain, nonatomic) NSError *error;
@property (nonatomic, readonly) NSString *protocolVersion;
@property (nonatomic, readonly) long long statusCode;
@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) NSNumber *maxAge;

- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;
- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2 bodyIsPlist:(_Bool)arg3;
- (void)_parsePlistResponse:(id)arg1;
- (id)_stringWithDescriptionForResponseError:(id)arg1;
- (void)_parseJSONResponse:(id)arg1;
- (id)_deviceSpecificLocalizedString:(id)arg1;

@end
