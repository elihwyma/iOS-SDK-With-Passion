/*
 Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <Foundation/NSObject.h>

@class AXMIDIDevice, NSMutableSet, NSNumber, NSString;

@interface AXMIDIDeviceEntity : NSObject

{
    unsigned int _midiEntity;
    AXMIDIDevice *_device;
    NSMutableSet *_sources;
    NSMutableSet *_destinations;
    NSNumber *_supportsMMC;
}

@property (nonatomic) unsigned int midiEntity;
@property (retain, nonatomic) NSMutableSet *sources;
@property (retain, nonatomic) NSMutableSet *destinations;
@property (weak, nonatomic) AXMIDIDevice *device;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSNumber *uniqueID;
@property (nonatomic, readonly) NSNumber *deviceID;
@property (nonatomic, readonly) NSNumber *isEmbedded;
@property (nonatomic, readonly) NSNumber *isBroadcast;
@property (nonatomic, readonly) NSNumber *isOffline;
@property (nonatomic, readonly) NSNumber *isPrivate;
@property (nonatomic, readonly) NSString *driverName;
@property (nonatomic, readonly) NSNumber *supportsGeneralMIDI;
@property (nonatomic, readonly) NSNumber *supportsMMC;

- (id)description;
- (void)addMidiSource:(unsigned int)arg1;
- (void)removeMidiSource:(unsigned int)arg1;
- (void)addMidiDestination:(unsigned int)arg1;
- (void)removeMidiDestination:(unsigned int)arg1;
- (id)initWithMIDIEntity:(unsigned int)arg1 device:(id)arg2;
- (void)resetAndDetectEndpoints;
- (id)supportsGeneralMMC;
- (id)_sourceForMidiEndpoint:(unsigned int)arg1 addIfNeeded:(_Bool)arg2;
- (id)_destinationForMidiEndpoint:(unsigned int)arg1 addIfNeeded:(_Bool)arg2;

@end
