/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface UIKeyboardTaskEntry : NSObject <Swift>

{
    CDUnknownBlockType __task;
    NSArray *__creationStack;
}

@property (retain, nonatomic, readonly) NSArray *originatingStack;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)execute:(id)arg1;
- (id)initWithTask:(CDUnknownBlockType)arg1;

@end
