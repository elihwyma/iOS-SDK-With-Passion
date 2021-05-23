/*
 Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface TRDeviceSetupLegacySetupActionAuthInfo : NSObject

{
    NSDictionary *_headers;
    NSDictionary *_body;
}

@property (nonatomic, readonly) NSDictionary *headers;
@property (nonatomic, readonly) NSDictionary *body;

- (id)initWithHeaders:(id)arg1 body:(id)arg2;

@end
