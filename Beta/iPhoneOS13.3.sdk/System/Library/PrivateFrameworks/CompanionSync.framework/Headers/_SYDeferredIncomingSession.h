/*
 Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

#import <NSObject.h>

@class IDSMessageContext, NSDictionary, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface _SYDeferredIncomingSession : NSObject

{
    NSURL *_resourceURL;
    NSString *_identifier;
    NSDictionary *_metadata;
    IDSMessageContext *_idsContext;
}

@property (copy, nonatomic) NSURL *resourceURL;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSDictionary *metadata;
@property (retain, nonatomic) IDSMessageContext *idsContext;

@end
