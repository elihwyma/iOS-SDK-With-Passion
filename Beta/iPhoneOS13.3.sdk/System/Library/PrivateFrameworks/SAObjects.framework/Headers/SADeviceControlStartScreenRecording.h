/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@interface SADeviceControlStartScreenRecording : SABaseClientBoundCommand

+ (id)startScreenRecording;
+ (id)startScreenRecordingWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
