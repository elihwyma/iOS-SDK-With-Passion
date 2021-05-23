/*
 Image: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation
 */

#import <Foundation/NSObject.h>

@class NFUnfairLock;

@interface NFLazy : NSObject

{
    id _value;
    CDUnknownBlockType _constructor;
    NFUnfairLock *_lock;
}

@property (copy, nonatomic, readonly) CDUnknownBlockType constructor;
@property (copy, nonatomic, readonly) NFUnfairLock *lock;
@property (nonatomic, readonly) id value;

- (id)initWithConstructor:(CDUnknownBlockType)arg1;

@end
