/*
 Image: /System/Library/PrivateFrameworks/iAdDeveloper.framework/iAdDeveloper
 */

#import <iAdDeveloper/HTSHTTPMessage.h>

@class HTSHTTPMessageRequest, NSMutableData, NSString;

@interface HTSHTTPMessageResponse : HTSHTTPMessage

{
    int _statusCode;
    NSString *_statusDescription;
    NSString *_trackingDescription;
    HTSHTTPMessageRequest *_request;
    NSMutableData *_serializedData;
    double _sendTime;
    unsigned long long _written;
}

@property (retain, nonatomic) HTSHTTPMessageRequest *request;
@property (retain, nonatomic) NSMutableData *serializedData;
@property (nonatomic) unsigned long long written;
@property (nonatomic) double sendTime;
@property (nonatomic) int statusCode;
@property (copy, nonatomic) NSString *statusDescription;
@property (copy, nonatomic) NSString *trackingDescription;

- (void)dealloc;
- (struct __CFHTTPMessage *)copyMessage;

@end
