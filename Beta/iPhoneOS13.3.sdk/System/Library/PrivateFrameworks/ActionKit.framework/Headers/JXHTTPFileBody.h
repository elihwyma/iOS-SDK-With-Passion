/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface JXHTTPFileBody : NSObject

{
    NSString *_filePath;
    NSString *_httpContentType;
}

@property (copy, nonatomic) NSString *filePath;
@property (copy, nonatomic) NSString *httpContentType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)withFilePath:(id)arg1 contentType:(id)arg2;
+ (id)withFilePath:(id)arg1;

- (id)httpInputStream;
- (long long)httpContentLength;
- (id)initWithFilePath:(id)arg1 contentType:(id)arg2;

@end
