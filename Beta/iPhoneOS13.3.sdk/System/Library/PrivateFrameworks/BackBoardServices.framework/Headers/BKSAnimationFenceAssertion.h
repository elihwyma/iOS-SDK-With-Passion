/*
 Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

#import <Foundation/NSObject.h>

@class BSMachPortSendRight, NSString;

@interface BKSAnimationFenceAssertion : NSObject

{
    unsigned long long _fenceName;
    unsigned long long _assertionName;
    BSMachPortSendRight *_preFence;
    int _invalid;
    _Bool _shouldTrace;
}

@property (nonatomic, readonly, getter=isValid) _Bool valid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)newSystemFenceAssertionForTriggerPort:(unsigned int)arg1;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)_initWithFenceName:(unsigned long long)arg1 assertionName:(unsigned long long)arg2 preFence:(id)arg3 shouldTrace:(_Bool)arg4;

@end
