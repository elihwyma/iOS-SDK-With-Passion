/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <NSObject.h>

@class NSData, NSString;

@interface NSURLSessionWebSocketMessage : NSObject

{
    id content;
    long long _type;
}

@property (readonly) long long type;
@property (copy, readonly) NSData *data;
@property (copy, readonly) NSString *string;

- (id)initWithData:(id)arg1;
- (id)initWithString:(id)arg1;

@end
