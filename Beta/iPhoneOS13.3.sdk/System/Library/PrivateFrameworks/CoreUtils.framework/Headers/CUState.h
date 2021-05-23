/*
 Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

#import <NSObject.h>

@class NSPointerArray, NSString;

@interface CUState : NSObject

{
    CDUnknownBlockType _eventHandler;
    unsigned long long _index;
    NSPointerArray *_lcaMap;
    NSString *_name;
    CUState *_parent;
}

@property (copy, nonatomic) CDUnknownBlockType eventHandler;
@property (copy, nonatomic, readonly) NSString *name;

- (void)dealloc;
- (id)description;
- (void)invalidate;
- (id)initWithName:(id)arg1 parent:(id)arg2;

@end
