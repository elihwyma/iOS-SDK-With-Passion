/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

__attribute__((visibility("hidden")))
@interface _UIWeakReference : NSObject <Swift>

{
    id _object;
}

@property (weak, nonatomic) id object;

+ (id)weakReferenceWrappingObject:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithObject:(id)arg1;

@end
