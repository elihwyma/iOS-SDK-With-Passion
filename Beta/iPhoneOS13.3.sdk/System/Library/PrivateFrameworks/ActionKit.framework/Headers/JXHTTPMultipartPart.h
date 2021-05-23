/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

@class NSData, NSString;

@interface JXHTTPMultipartPart : NSObject

{
    int _multipartType;
    NSString *_key;
    NSData *_preData;
    NSData *_contentData;
    NSData *_postData;
}

@property (nonatomic) int multipartType;
@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSData *preData;
@property (retain, nonatomic) NSData *contentData;
@property (retain, nonatomic) NSData *postData;

+ (id)withMultipartType:(int)arg1 key:(id)arg2 data:(id)arg3 contentType:(id)arg4 fileName:(id)arg5 boundary:(id)arg6;

- (id)filePath;
- (long long)contentLength;
- (long long)dataLength;
- (unsigned long long)loadMutableData:(id)arg1 withDataInRange:(struct _NSRange)arg2;

@end
