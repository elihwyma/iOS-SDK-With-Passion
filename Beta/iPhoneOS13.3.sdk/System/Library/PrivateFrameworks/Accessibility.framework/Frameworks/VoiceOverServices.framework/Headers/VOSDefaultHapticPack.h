/*
 Image: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/VoiceOverServices.framework/VoiceOverServices
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface VOSDefaultHapticPack : NSObject

@property (nonatomic, readonly) NSDictionary *eventToHapticFilenameMapping;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)hapticAssetURLForOutputEvent:(id)arg1;

@end
