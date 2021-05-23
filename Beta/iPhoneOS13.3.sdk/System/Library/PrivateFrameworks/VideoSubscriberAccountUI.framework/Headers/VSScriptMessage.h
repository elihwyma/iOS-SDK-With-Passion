/*
 Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

#import <Foundation/NSObject.h>

@class NSString, VSScriptSecurityOrigin;

__attribute__((visibility("hidden")))
@interface VSScriptMessage : NSObject

{
    NSString *_body;
    VSScriptSecurityOrigin *_source;
    VSScriptSecurityOrigin *_target;
}

@property (copy, nonatomic) NSString *body;
@property (retain, nonatomic) VSScriptSecurityOrigin *source;
@property (retain, nonatomic) VSScriptSecurityOrigin *target;

- (id)description;

@end
