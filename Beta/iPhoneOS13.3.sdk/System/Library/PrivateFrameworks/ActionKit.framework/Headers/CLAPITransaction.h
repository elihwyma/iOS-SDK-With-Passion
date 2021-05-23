/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

@class NSHTTPURLResponse, NSMutableData, NSString, NSURLConnection, NSURLRequest;

@interface CLAPITransaction : NSObject

{
    NSURLRequest *_request;
    NSURLConnection *_connection;
    NSMutableData *_receivedData;
    NSHTTPURLResponse *_response;
    long long _requestType;
    NSString *_identifier;
    id _userInfo;
    id _internalContext;
}

@property (retain, nonatomic) NSURLRequest *request;
@property (retain, nonatomic) NSHTTPURLResponse *response;
@property (retain, nonatomic) NSURLConnection *connection;
@property (retain, nonatomic) NSMutableData *receivedData;
@property (nonatomic) long long requestType;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) id userInfo;
@property (retain, nonatomic) id internalContext;

+ (id)transaction;

- (id)init;
- (void)dealloc;

@end
