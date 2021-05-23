/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIForceMessage : NSObject

{
    _Bool _reset;
    double touchForce;
    unsigned long long stage;
    double timestamp;
}

@property (nonatomic) double touchForce;
@property (nonatomic) unsigned long long stage;
@property (nonatomic) double timestamp;
@property (nonatomic, readonly, getter=isReset) _Bool reset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)reset;
+ (id)observe:(CDUnknownBlockType)arg1;

@end
