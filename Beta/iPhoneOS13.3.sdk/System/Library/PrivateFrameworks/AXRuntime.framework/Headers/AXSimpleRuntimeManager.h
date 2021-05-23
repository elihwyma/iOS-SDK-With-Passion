/*
 Image: /System/Library/PrivateFrameworks/AXRuntime.framework/AXRuntime
 */

#import <Foundation/NSObject.h>

@interface AXSimpleRuntimeManager : NSObject

{
    _Bool _systemWideServer;
    _Bool _started;
    CDUnknownBlockType _parameterizedAttributeCallback;
    CDUnknownBlockType _attributeCallback;
    CDUnknownBlockType _setAttributeCallback;
    CDUnknownBlockType _performActionCallback;
    CDUnknownBlockType _clientObserverCallback;
    CDUnknownBlockType _hitTestCallback;
    CDUnknownBlockType _applicationElementCallback;
    CDUnknownBlockType _outgoingValuePreprocessor;
}

@property (nonatomic) _Bool started;
@property (nonatomic) _Bool systemWideServer;
@property (copy, nonatomic) CDUnknownBlockType parameterizedAttributeCallback;
@property (copy, nonatomic) CDUnknownBlockType attributeCallback;
@property (copy, nonatomic) CDUnknownBlockType setAttributeCallback;
@property (copy, nonatomic) CDUnknownBlockType performActionCallback;
@property (copy, nonatomic) CDUnknownBlockType clientObserverCallback;
@property (copy, nonatomic) CDUnknownBlockType hitTestCallback;
@property (copy, nonatomic) CDUnknownBlockType applicationElementCallback;
@property (copy, nonatomic) CDUnknownBlockType outgoingValuePreprocessor;

+ (id)sharedManager;

- (void)start;

@end
