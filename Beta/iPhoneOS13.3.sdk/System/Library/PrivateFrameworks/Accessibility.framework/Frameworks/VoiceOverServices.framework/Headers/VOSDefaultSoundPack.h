/*
 Image: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/VoiceOverServices.framework/VoiceOverServices
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface VOSDefaultSoundPack : NSObject

@property (nonatomic, readonly) NSDictionary *eventToSoundFilenameMapping;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)soundAssetURLForOutputEvent:(id)arg1;

@end
