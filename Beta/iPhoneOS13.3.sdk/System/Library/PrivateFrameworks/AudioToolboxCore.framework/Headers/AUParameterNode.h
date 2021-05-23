/*
 Image: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
 */

#import <Foundation/NSObject.h>

@class AUParameterGroup, NSString;

@interface AUParameterNode : NSObject

{
    NSString *_identifier;
    NSString *_displayName;
    unsigned long long _indexInGroup;
    AUParameterGroup *_parentNode;
    struct AUObserverList *_observerList;
    CDUnknownBlockType _impl_implementorValueObserver;
    CDUnknownBlockType _impl_implementorValueProvider;
    CDUnknownBlockType _impl_implementorStringFromValueCallback;
    CDUnknownBlockType _impl_implementorValueFromStringCallback;
    CDUnknownBlockType _impl_implementorDisplayNameWithLengthCallback;
}

@property (copy, nonatomic) CDUnknownBlockType implementorValueObserver;
@property (copy, nonatomic) CDUnknownBlockType implementorValueProvider;
@property (copy, nonatomic) CDUnknownBlockType implementorStringFromValueCallback;
@property (copy, nonatomic) CDUnknownBlockType implementorValueFromStringCallback;
@property (copy, nonatomic) CDUnknownBlockType implementorDisplayNameWithLengthCallback;
@property (nonatomic) unsigned long long indexInGroup;
@property (weak, nonatomic) AUParameterGroup *parentNode;
@property (nonatomic) struct AUObserverList *observerList;
@property (copy, nonatomic) CDUnknownBlockType impl_implementorValueObserver;
@property (copy, nonatomic) CDUnknownBlockType impl_implementorValueProvider;
@property (copy, nonatomic) CDUnknownBlockType impl_implementorStringFromValueCallback;
@property (copy, nonatomic) CDUnknownBlockType impl_implementorValueFromStringCallback;
@property (copy, nonatomic) CDUnknownBlockType impl_implementorDisplayNameWithLengthCallback;
@property (copy, nonatomic, readonly) NSString *identifier;
@property (copy, nonatomic, readonly) NSString *keyPath;
@property (copy, nonatomic, readonly) NSString *displayName;

- (void)dealloc;
- (id)description;
- (_Bool)isGroup;
- (void)_serialize:(struct CASerializer *)arg1;
- (id)initWithID:(id)arg1 name:(id)arg2;
- (id)copyNodeWithOffset:(unsigned long long)arg1;
- (void)_walkTree:(int)arg1 callback:(CDUnknownBlockType)arg2;
- (id)_rootParent;
- (void)_observersChanged:(_Bool)arg1 deltaCount:(int)arg2;
- (void *)tokenByAddingParameterObserver:(CDUnknownBlockType)arg1;
- (void *)_addRecObserver:(CDUnknownBlockType)arg1 autoObserver:(CDUnknownBlockType)arg2;
- (void *)tokenByAddingParameterRecordingObserver:(CDUnknownBlockType)arg1;
- (void *)tokenByAddingParameterAutomationObserver:(CDUnknownBlockType)arg1;
- (void)removeParameterObserver:(void *)arg1;
- (id)displayNameWithLength:(long long)arg1;
- (void)_deserialize:(struct CADeserializer *)arg1;

@end
