/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface _DKSyncToggle : NSObject

{
    _Bool _enabled;
    NSObject *_object;
    NSString *_name;
    SEL _enableSelector;
    SEL _disableSelector;
}

@property (nonatomic, getter=isEnabled) _Bool enabled;
@property (weak, nonatomic, readonly) NSObject *object;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) SEL enableSelector;
@property (nonatomic, readonly) SEL disableSelector;

+ (id)toggleWithObject:(id)arg1 name:(id)arg2 enableSelector:(SEL)arg3 disableSelector:(SEL)arg4;

- (void)dealloc;
- (id)initWithObject:(id)arg1 name:(id)arg2 enableSelector:(SEL)arg3 disableSelector:(SEL)arg4;
- (void)_setEnabled:(_Bool)arg1;

@end
