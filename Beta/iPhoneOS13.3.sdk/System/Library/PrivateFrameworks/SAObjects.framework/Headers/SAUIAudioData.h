/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSData, NSString, SAUIAudioDescription;

@interface SAUIAudioData : AceObject <Swift>

@property (copy, nonatomic) NSData *audioBuffer;
@property (retain, nonatomic) SAUIAudioDescription *decoderStreamDescription;
@property (retain, nonatomic) SAUIAudioDescription *playerStreamDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)audioData;
+ (id)audioDataWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
