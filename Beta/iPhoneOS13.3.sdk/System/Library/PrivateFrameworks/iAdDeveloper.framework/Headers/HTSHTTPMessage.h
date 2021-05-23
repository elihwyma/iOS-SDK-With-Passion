/*
 Image: /System/Library/PrivateFrameworks/iAdDeveloper.framework/iAdDeveloper
 */

#import <NSObject.h>

@class NSData, NSMutableDictionary, NSString;

@interface HTSHTTPMessage : NSObject

{
    NSMutableDictionary *_headers;
    NSData *_body;
    NSString *_versionString;
}

@property (copy, nonatomic) NSString *versionString;
@property (retain, nonatomic) NSMutableDictionary *headers;
@property (retain, nonatomic) NSData *body;

- (void)dealloc;
- (id)valueForHeaderField:(id)arg1;
- (void)addHeadersToMessage:(struct __CFHTTPMessage *)arg1;
- (struct __CFHTTPMessage *)copyMessage;

@end
