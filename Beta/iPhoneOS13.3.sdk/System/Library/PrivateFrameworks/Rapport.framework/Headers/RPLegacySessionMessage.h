/*
 Image: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface RPLegacySessionMessage : NSObject

{
    NSDictionary *_message;
    NSDictionary *_options;
    NSString *_requestID;
    CDUnknownBlockType _responseHandler;
}

@property (copy, nonatomic) NSDictionary *message;
@property (copy, nonatomic) NSDictionary *options;
@property (copy, nonatomic) NSString *requestID;
@property (copy, nonatomic) CDUnknownBlockType responseHandler;

@end
