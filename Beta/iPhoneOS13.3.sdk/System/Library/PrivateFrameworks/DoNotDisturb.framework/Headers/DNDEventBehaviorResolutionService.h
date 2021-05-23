/*
 Image: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
 */

#import <NSObject.h>

@class NSString;

@interface DNDEventBehaviorResolutionService : NSObject

{
    NSString *_clientIdentifier;
}

+ (void)initialize;
+ (id)serviceForClientIdentifier:(id)arg1;

- (id)_initWithClientIdentifier:(id)arg1;
- (id)resolveBehaviorForEventDetails:(id)arg1 error:(id *)arg2;

@end
