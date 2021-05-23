/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

#import <AVFoundation/Swift-Protocol.h>

@class NSString;

@protocol AVKVOIntrospection><AVCallbackCancellation;

__attribute__((visibility("hidden")))
@interface AVKeyPathFlattenerKVOIntrospectionShim : NSObject <Swift>

{
    NSObject *_observedObject;
    id <AVKVOIntrospection><AVCallbackCancellation> _realNotifier;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSObject *observedObject;

- (void)dealloc;
- (void)cancelCallbacks;
- (id)initWithObservedObject:(id)arg1 realNotifier:(id)arg2;

@end
