/*
 Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol OS_dispatch_source;

@interface BSDispatchSource : NSObject

{
    struct dispatch_source_type_s *_type;
    NSObject<OS_dispatch_source> *_source;
    int _activated;
    int _invalidated;
    CDUnknownBlockType _eventHandler;
    CDUnknownBlockType _cancelHandler;
}

@property (copy, nonatomic) CDUnknownBlockType eventHandler;
@property (copy, nonatomic) CDUnknownBlockType cancelHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)invalidate;
- (void)resume;
- (id)initWithType:(struct dispatch_source_type_s *)arg1 handle:(unsigned long long)arg2 mask:(unsigned long long)arg3 queue:(id)arg4 configureSourceBlock:(CDUnknownBlockType)arg5;

@end
