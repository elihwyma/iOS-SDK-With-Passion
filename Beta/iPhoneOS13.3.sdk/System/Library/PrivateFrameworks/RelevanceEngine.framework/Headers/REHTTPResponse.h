/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class NSData, NSDate, NSDictionary, NSString, REHTTPRequest;

@interface REHTTPResponse : NSObject

{
    REHTTPRequest *_request;
    struct __CFHTTPMessage *_message;
    long long _statusCode;
}

@property (nonatomic, readonly) long long statusCode;
@property (copy, nonatomic, readonly) NSDictionary *headerFields;
@property (copy, nonatomic) NSString *contentType;
@property (copy, nonatomic) NSDate *date;
@property (copy, nonatomic) NSData *body;

- (void)dealloc;
- (id)_dateFormatter;
- (struct _CFHTTPServerResponse *)response;
- (id)initWithRequest:(id)arg1 statusCode:(long long)arg2;
- (void)setHeaderValue:(id)arg1 forKey:(id)arg2;
- (id)headerValueForKey:(id)arg1;

@end
