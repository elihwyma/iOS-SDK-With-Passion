/*
 Image: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface _PASKVOHandlerTask : NSObject

{
    NSString *_keyPath;
    NSObject *_object;
    CDUnknownBlockType _afterBlock;
    CDUnknownBlockType _beforeAndAfterBlock;
}

@property (copy, nonatomic) NSString *keyPath;
@property (weak, nonatomic) NSObject *object;
@property (copy, nonatomic) CDUnknownBlockType afterBlock;
@property (copy, nonatomic) CDUnknownBlockType beforeAndAfterBlock;

@end
