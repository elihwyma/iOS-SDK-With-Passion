/*
 Image: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
 */

#import <Transparency/TransparencyRequest.h>

@class NSData, NSString, NSURL, NSUUID;

@interface KTLogRequest : TransparencyRequest

{
    _Bool _isGET;
    NSString *_application;
    NSURL *_url;
    NSData *_data;
    NSUUID *_uuid;
    double _timeout;
}

@property (retain) NSString *application;
@property _Bool isGET;
@property (retain) NSURL *url;
@property (retain) NSData *data;
@property (retain) NSUUID *uuid;
@property double timeout;

- (id)createGETRequestForURL:(id)arg1 timeout:(double)arg2 error:(id *)arg3;
- (id)createPOSTRequestForURL:(id)arg1 timeout:(double)arg2 contents:(id)arg3 error:(id *)arg4;
- (id)copyRequest:(id *)arg1;
- (id)initGETWithURL:(id)arg1 application:(id)arg2;
- (id)initPOSTWithURL:(id)arg1 data:(id)arg2 uuid:(id)arg3 application:(id)arg4;

@end
