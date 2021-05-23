/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

@class NSUUID;

__attribute__((visibility("hidden")))
@interface _NSIPCallbackSerialization : NSObject

{
    CDUnknownBlockType _endBlock;
    _Atomic _Bool _hasBegun;
    _Atomic _Bool _hasEnded;
    NSUUID *_UUID;
}

@property (copy, nonatomic) NSUUID *UUID;

- (id)init;
- (void)dealloc;
- (void)sendBeginBlock:(CDUnknownBlockType)arg1;
- (void)sendEndBlock:(CDUnknownBlockType)arg1;

@end
