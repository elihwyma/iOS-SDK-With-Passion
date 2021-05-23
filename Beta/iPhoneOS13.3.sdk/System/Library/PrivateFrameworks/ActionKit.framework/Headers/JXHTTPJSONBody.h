/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

@class NSData, NSString;

@interface JXHTTPJSONBody : NSObject

{
    NSData *_requestData;
}

@property (retain, nonatomic) NSData *requestData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)withString:(id)arg1;
+ (id)withData:(id)arg1;
+ (id)withJSONObject:(id)arg1;

- (id)initWithData:(id)arg1;
- (id)httpInputStream;
- (id)httpContentType;
- (long long)httpContentLength;
- (void)httpOperationDidFinishLoading:(id)arg1;

@end
