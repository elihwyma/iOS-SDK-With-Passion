/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSNumber, NSString;

@interface SAUIAudioDescription : AceObject <Swift>

@property (copy, nonatomic) NSNumber *bitsPerChannel;
@property (copy, nonatomic) NSNumber *bytesPerFrame;
@property (copy, nonatomic) NSNumber *bytesPerPacket;
@property (copy, nonatomic) NSNumber *channelsPerFrame;
@property (copy, nonatomic) NSString *format;
@property (copy, nonatomic) NSNumber *formatFlags;
@property (copy, nonatomic) NSNumber *formatID;
@property (copy, nonatomic) NSNumber *framesPerPacket;
@property (copy, nonatomic) NSNumber *reserved;
@property (copy, nonatomic) NSNumber *sampleRate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)audioDescription;
+ (id)audioDescriptionWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
