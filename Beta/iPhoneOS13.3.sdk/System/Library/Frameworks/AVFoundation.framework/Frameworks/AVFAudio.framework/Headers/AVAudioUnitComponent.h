/*
 Image: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString, NSURL;

@interface AVAudioUnitComponent : NSObject

{
    void *_impl;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *typeName;
@property (nonatomic, readonly) NSString *localizedTypeName;
@property (nonatomic, readonly) NSString *manufacturerName;
@property (nonatomic, readonly) unsigned long long version;
@property (nonatomic, readonly) NSString *versionString;
@property (nonatomic, readonly) NSURL *componentURL;
@property (nonatomic, readonly) NSArray *availableArchitectures;
@property (nonatomic, readonly, getter=isSandboxSafe) _Bool sandboxSafe;
@property (nonatomic, readonly) _Bool hasMIDIInput;
@property (nonatomic, readonly) _Bool hasMIDIOutput;
@property (nonatomic, readonly) struct OpaqueAudioComponent *audioComponent;
@property (copy) NSArray *userTagNames;
@property (nonatomic, readonly) NSArray *allTagNames;
@property (nonatomic, readonly) struct AudioComponentDescription audioComponentDescription;
@property (nonatomic, readonly) NSURL *iconURL;
@property (nonatomic, readonly) _Bool passesAUVal;
@property (nonatomic, readonly) _Bool hasCustomView;
@property (nonatomic, readonly) NSDictionary *configurationDictionary;

- (id)initWithComponentDescription:(struct AudioComponentDescription)arg1;
- (id)initWithComponentDescription:(struct AudioComponentDescription)arg1 withAVAUManagerImpl:(struct AVAudioUnitComponentManagerImpl *)arg2;
- (void)localeChanged;
- (_Bool)supportsNumberInputChannels:(long long)arg1 outputChannels:(long long)arg2;
- (id)GetTypeName:(unsigned int)arg1;
- (_Bool)isComponentDescriptionMatch:(struct AudioComponentDescription)arg1;

@end
