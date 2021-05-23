/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <Foundation/NSObject.h>

@class NSDate, NSDictionary, NSString, NSURL;

@interface CKDTrafficMetadata : NSObject

{
    _Bool _parsingStandaloneMessage;
    NSDate *_timestamp;
    NSURL *_url;
    NSString *_method;
    long long _status;
    NSDictionary *_headers;
    NSString *_requestClassName;
}

@property (retain, nonatomic) NSDate *timestamp;
@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) NSString *method;
@property (nonatomic) long long status;
@property (retain, nonatomic) NSDictionary *headers;
@property (retain, nonatomic) NSString *requestClassName;
@property (nonatomic) _Bool parsingStandaloneMessage;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
