/*
 Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <Foundation/NSObject.h>

@class AXMIDIParser, NSMutableSet, NSString;

@interface AXMIDIManager : NSObject

{
    unsigned int _midiClientRef;
    unsigned int _midiInputPortRef;
    CDUnknownBlockType _eventHandler;
    AXMIDIParser *_parser;
    NSString *_clientIdentifier;
    NSMutableSet *_devices;
}

@property (retain, nonatomic) AXMIDIParser *parser;
@property (retain, nonatomic) NSString *clientIdentifier;
@property (retain, nonatomic) NSMutableSet *devices;
@property (nonatomic) unsigned int midiClientRef;
@property (nonatomic) unsigned int midiInputPortRef;
@property (copy, nonatomic) CDUnknownBlockType eventHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)device:(id)arg1 didRemoveEntity:(id)arg2;
- (void)device:(id)arg1 didAddEntity:(id)arg2;
- (void)device:(id)arg1 entity:(id)arg2 didAddSource:(id)arg3;
- (void)device:(id)arg1 entity:(id)arg2 didRemoveSource:(id)arg3;
- (void)device:(id)arg1 entity:(id)arg2 didAddDestination:(id)arg3;
- (void)device:(id)arg1 entity:(id)arg2 didRemoveDestination:(id)arg3;
- (id)initWithIdentifier:(id)arg1 eventHandler:(CDUnknownBlockType)arg2;
- (void)_handleObjectAddedNotification:(struct MIDIObjectAddRemoveNotification *)arg1;
- (void)_handleObjectRemovedNotification:(struct MIDIObjectAddRemoveNotification *)arg1;
- (void)_handlePropertyChangedNotification:(struct MIDIObjectPropertyChangeNotification *)arg1;
- (void)_handleThruConnectionsChangedNotification:(struct MIDIObjectPropertyChangeNotification *)arg1;
- (void)_handleSerialPortOwnerChangedNotification:(struct MIDIObjectPropertyChangeNotification *)arg1;
- (void)_handleIOErrorNotification:(struct MIDIIOErrorNotification *)arg1;
- (void)_resetAndDetectDevices;
- (id)_nameForMidiObjectType:(int)arg1;
- (id)_deviceForMidiDevice:(unsigned int)arg1 addIfNeeded:(_Bool)arg2;
- (void)_addMidiEntity:(unsigned int)arg1;
- (void)_addMidiSource:(unsigned int)arg1;
- (void)_addMidiDestination:(unsigned int)arg1;
- (void)_removeMidiDevice:(unsigned int)arg1;
- (void)_removeMidiEntity:(unsigned int)arg1;
- (void)_removeMidiSource:(unsigned int)arg1;
- (void)_removeMidiDestination:(unsigned int)arg1;
- (void)printAttachedDevices;

@end
