/*
 Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <Foundation/NSObject.h>

@interface AXMIDIParser : NSObject

- (unsigned short)_channelForStatusByte:(unsigned char)arg1;
- (long long)_eventTypeForStatusByte:(unsigned char)arg1;
- (unsigned long long)_expectedPacketLengthForEventType:(long long)arg1;
- (id)parse:(const struct MIDIPacketList *)arg1 error:(id *)arg2;

@end
