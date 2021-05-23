/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface FCCancelHandler : NSObject

{
    CDUnknownBlockType _cancelBlock;
    id _weakTarget;
    id _strongTarget;
    SEL _selector;
}

@property (copy, nonatomic) CDUnknownBlockType cancelBlock;
@property (weak, nonatomic) id weakTarget;
@property (retain, nonatomic) id strongTarget;
@property (nonatomic) SEL selector;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)cancelHandlerWithBlock:(CDUnknownBlockType)arg1;
+ (id)cancelHandlerWithWeakTarget:(id)arg1 selector:(SEL)arg2;
+ (id)cancelHandlerWithStrongTarget:(id)arg1 selector:(SEL)arg2;

- (void)cancel;
- (id)initWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithWeakTarget:(id)arg1 selector:(SEL)arg2;
- (id)initWithStrongTarget:(id)arg1 selector:(SEL)arg2;

@end
