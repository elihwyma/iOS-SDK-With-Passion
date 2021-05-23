/*
 Image: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation
 */

#import <Foundation/NSObject.h>

@class NSSet, NSString;

@interface NFEventTrigger : NSObject

{
    _Bool _fireOnce;
    _Bool _fireOnAny;
    NSString *_key;
    NSSet *_events;
    CDUnknownBlockType _block;
}

@property (copy, nonatomic, readonly) NSString *key;
@property (copy, nonatomic, readonly) NSSet *events;
@property (nonatomic, readonly) CDUnknownBlockType block;
@property (nonatomic, readonly) _Bool fireOnce;
@property (nonatomic, readonly) _Bool fireOnAny;

- (id)initWithKey:(id)arg1 fireOnce:(_Bool)arg2 fireOnAny:(_Bool)arg3 events:(id)arg4 block:(CDUnknownBlockType)arg5;

@end
