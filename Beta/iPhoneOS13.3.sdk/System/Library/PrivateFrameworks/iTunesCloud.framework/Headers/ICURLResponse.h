/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

@class NSData, NSDate, NSURL, NSURLRequest, NSURLResponse;

@interface ICURLResponse : NSObject

{
    long long _parsedBodyResponseType;
    id _parsedBodyResponse;
    NSURLRequest *_urlRequest;
    NSURLResponse *_urlResponse;
    NSData *_bodyData;
    NSURL *_bodyDataURL;
}

@property (nonatomic, readonly) NSURLRequest *urlRequest;
@property (nonatomic, readonly) NSURLResponse *urlResponse;
@property (nonatomic, readonly) NSData *bodyData;
@property (nonatomic, readonly) NSURL *bodyDataURL;
@property (nonatomic, readonly) NSDate *expirationDate;

- (id)parsedBody;
- (id)parsedBodyDictionary;
- (id)initWithURLResponse:(id)arg1 urlRequest:(id)arg2 bodyData:(id)arg3;
- (id)initWithURLResponse:(id)arg1 urlRequest:(id)arg2 bodyDataURL:(id)arg3;
- (id)parsedBodyArray;
- (void)_prepareParsedBodyResponse;

@end
