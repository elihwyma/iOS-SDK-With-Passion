/*
 Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

@class NSUUID;

@interface HMFObjectObserver

{
    id _observedObject;
    CDUnknownBlockType _deallocationBlock;
    NSUUID *_identifier;
    unsigned long long _cachedHash;
}

@property (nonatomic, readonly) NSUUID *identifier;
@property (readonly) unsigned long long cachedHash;
@property (weak, readonly) id observedObject;
@property (copy) CDUnknownBlockType deallocationBlock;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)_stopObserving;
- (void)_startObserving;
- (id)observerKey;
- (id)initWithObservedObject:(id)arg1;

@end
