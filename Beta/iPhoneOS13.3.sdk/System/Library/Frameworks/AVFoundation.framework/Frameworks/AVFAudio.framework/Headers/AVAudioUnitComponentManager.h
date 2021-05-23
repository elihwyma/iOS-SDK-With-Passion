/*
 Image: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface AVAudioUnitComponentManager : NSObject

{
    void *_impl;
}

@property (nonatomic, readonly) NSArray *tagNames;
@property (nonatomic, readonly) NSArray *standardLocalizedTagNames;

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedAudioUnitComponentManager;
+ (void)privateAllocInitSingleton;

- (id)init;
- (unsigned long long)retainCount;
- (id)retain;
- (oneway void)release;
- (id)autorelease;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)localeChanged:(id)arg1;
- (void)registrationsChanged:(id)arg1;
- (id)componentsMatchingPredicate:(id)arg1;
- (id)componentsPassingTest:(CDUnknownBlockType)arg1;
- (id)componentsMatchingDescription:(struct AudioComponentDescription)arg1;

@end
