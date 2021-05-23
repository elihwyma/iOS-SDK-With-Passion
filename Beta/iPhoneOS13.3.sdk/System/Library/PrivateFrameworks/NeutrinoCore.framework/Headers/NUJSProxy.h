/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <Foundation/NSObject.h>

@interface NUJSProxy : NSObject

{
    id _representedObject;
}

@property (nonatomic, readonly) id representedObject;

- (id)init;
- (id)description;
- (void)reset;
- (id)initWithRepresentedObject:(id)arg1 context:(id)arg2;

@end
