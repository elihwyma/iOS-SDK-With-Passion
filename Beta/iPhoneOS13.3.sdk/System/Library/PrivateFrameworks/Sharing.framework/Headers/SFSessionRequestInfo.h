/*
 Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface SFSessionRequestInfo : NSObject

{
    NSString *_requestID;
    NSDictionary *_options;
    NSDictionary *_request;
    CDUnknownBlockType _responseHandler;
}

@property (copy, nonatomic) NSString *requestID;
@property (copy, nonatomic) NSDictionary *options;
@property (copy, nonatomic) NSDictionary *request;
@property (copy, nonatomic) CDUnknownBlockType responseHandler;

@end
