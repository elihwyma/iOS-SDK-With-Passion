/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, NSURL;

@protocol TVImageDecrypter;

@interface TVURLImageRequest : NSObject

{
    NSURL *_url;
    NSDictionary *_headers;
    id <TVImageDecrypter> _decrypter;
    NSString *_identifier;
}

@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) NSDictionary *headers;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) id <TVImageDecrypter> decrypter;

- (id)initWithURL:(id)arg1 headers:(id)arg2 identifier:(id)arg3 decrypter:(id)arg4;
- (id)initWithURL:(id)arg1 headers:(id)arg2 decrypter:(id)arg3;

@end
