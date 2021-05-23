/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SXBlockActionActivity : NSObject

{
    NSString *_label;
    unsigned long long _type;
    CDUnknownBlockType _genericBlock;
    CDUnknownBlockType _immediateBlock;
    CDUnknownBlockType _userSelectedBlock;
}

@property (copy, nonatomic, readonly) CDUnknownBlockType genericBlock;
@property (copy, nonatomic, readonly) CDUnknownBlockType immediateBlock;
@property (copy, nonatomic, readonly) CDUnknownBlockType userSelectedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *label;
@property (nonatomic, readonly) unsigned long long type;

- (id)initWithLabel:(id)arg1 type:(unsigned long long)arg2 block:(CDUnknownBlockType)arg3;
- (void)invokeWithAction:(id)arg1 invocationMethod:(unsigned long long)arg2;
- (id)initWithLabel:(id)arg1 type:(unsigned long long)arg2 immediateBlock:(CDUnknownBlockType)arg3 userSelectedBlock:(CDUnknownBlockType)arg4;

@end
