/*
 Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

#import <Foundation/NSObject.h>

@class NSData, NSDictionary, NSError, NSString, NSURL;

@interface HSResponse : NSObject

{
    NSString *_MIMEType;
    unsigned long long _responseCode;
    NSDictionary *_responseHeaderFields;
    NSData *_responseData;
    NSURL *_responseDataFileURL;
    NSError *_error;
}

@property (nonatomic, readonly) NSString *MIMEType;
@property (nonatomic, readonly) unsigned long long responseCode;
@property (nonatomic, readonly) NSDictionary *responseHeaderFields;
@property (nonatomic, readonly) NSData *responseData;
@property (copy, nonatomic) NSURL *responseDataFileURL;
@property (nonatomic, readonly) NSError *error;

+ (id)responseWithResponse:(id)arg1;
+ (id)responseWithCode:(unsigned long long)arg1 headerFields:(id)arg2 data:(id)arg3 MIMEType:(id)arg4 error:(id)arg5;

- (id)description;
- (id)initWithCode:(unsigned long long)arg1 headerFields:(id)arg2 data:(id)arg3 MIMEType:(id)arg4 error:(id)arg5;

@end
