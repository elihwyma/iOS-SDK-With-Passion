/*
 Image: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
 */

#import <Foundation/NSObject.h>

@class NSData, NSURL;

@interface TransparencyRequest : NSObject

{
    _Bool _authenticated;
    _Bool _isGET;
    NSURL *_url;
    NSData *_data;
    double _timeout;
}

@property (retain) NSURL *url;
@property (retain) NSData *data;
@property double timeout;
@property _Bool isGET;
@property _Bool authenticated;

- (id)initWithURL:(id)arg1 data:(id)arg2 timeout:(double)arg3 isGET:(_Bool)arg4;
- (id)createGETRequestForURL:(id)arg1 timeout:(double)arg2 error:(id *)arg3;
- (id)createPOSTRequestForURL:(id)arg1 timeout:(double)arg2 contents:(id)arg3 error:(id *)arg4;
- (id)initGETWithURL:(id)arg1;
- (id)initPOSTWithURL:(id)arg1 data:(id)arg2;
- (id)copyRequest:(id *)arg1;

@end
