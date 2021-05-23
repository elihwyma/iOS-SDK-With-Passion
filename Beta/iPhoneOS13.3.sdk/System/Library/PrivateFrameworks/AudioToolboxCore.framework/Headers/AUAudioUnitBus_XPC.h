/*
 Image: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
 */

#import <AudioToolboxCore/AUAudioUnitBus.h>

@class AUAudioUnit_XH, AVAudioFormat, NSArray, NSXPCConnection;

__attribute__((visibility("hidden")))
@interface AUAudioUnitBus_XPC : AUAudioUnitBus

{
    AUAudioUnit_XH *_audioUnit;
    NSXPCConnection *_remoteAUXPCConnection;
    unsigned int _scope;
    unsigned int _element;
    AVAudioFormat *_format;
    NSArray *_supportedChannelLayoutTags;
    _Bool _removingObserverWithContext;
}

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (void)setEnabled:(_Bool)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void *)arg3;
- (_Bool)isEnabled;
- (id)format;
- (_Bool)setFormat:(id)arg1 error:(id *)arg2;
- (void)propertyChanged:(id)arg1;

@end
