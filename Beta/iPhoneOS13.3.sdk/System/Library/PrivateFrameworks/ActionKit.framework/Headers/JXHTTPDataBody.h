/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

@class NSData, NSString;

@interface JXHTTPDataBody : NSObject

{
    NSData *_data;
    NSString *_httpContentType;
}

@property (retain, nonatomic) NSData *data;
@property (copy, nonatomic) NSString *httpContentType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)withData:(id)arg1;
+ (id)withData:(id)arg1 contentType:(id)arg2;

- (id)initWithData:(id)arg1 contentType:(id)arg2;
- (id)httpInputStream;
- (long long)httpContentLength;

@end
