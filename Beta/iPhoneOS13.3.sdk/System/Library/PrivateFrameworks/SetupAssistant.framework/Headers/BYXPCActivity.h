/*
 Image: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
 */

#import <NSObject.h>

@protocol OS_xpc_object;

__attribute__((visibility("hidden")))
@interface BYXPCActivity : NSObject

{
    NSObject<OS_xpc_object> *_xpcActivity;
}

@property (retain, nonatomic) NSObject<OS_xpc_object> *xpcActivity;
@property (copy, nonatomic) NSObject<OS_xpc_object> *criteria;

+ (id)activityWithXPCActivity:(id)arg1;

- (long long)state;
- (_Bool)setState:(long long)arg1;

@end
