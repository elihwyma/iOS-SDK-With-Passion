/*
 Image: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface RPRequestRegistration : NSObject

{
    NSString *_requestID;
    NSDictionary *_options;
    CDUnknownBlockType _handler;
    CDUnknownBlockType _cnxHandler;
}

@property (copy, nonatomic) NSString *requestID;
@property (copy, nonatomic) NSDictionary *options;
@property (copy, nonatomic) CDUnknownBlockType handler;
@property (copy, nonatomic) CDUnknownBlockType cnxHandler;

@end
