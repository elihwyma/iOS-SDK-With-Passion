/*
 Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, NSNumber, NSString;

@protocol AXMIDIDeviceProtocol;

@interface AXMIDIDevice : NSObject

{
    unsigned int _midiDevice;
    id <AXMIDIDeviceProtocol> _delegate;
    NSNumber *_supportsMMC;
    NSMutableSet *_entities;
}

@property (nonatomic) unsigned int midiDevice;
@property (retain, nonatomic) NSMutableSet *entities;
@property (weak, nonatomic) id <AXMIDIDeviceProtocol> delegate;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *manufacturer;
@property (nonatomic, readonly) NSString *model;
@property (nonatomic, readonly) NSNumber *uniqueID;
@property (nonatomic, readonly) NSNumber *deviceID;
@property (nonatomic, readonly) NSNumber *isOffline;
@property (nonatomic, readonly) NSNumber *isPrivate;
@property (nonatomic, readonly) NSString *driverName;
@property (nonatomic, readonly) NSNumber *supportsGeneralMIDI;
@property (nonatomic, readonly) NSNumber *supportsMMC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)isEqual:(id)arg1;
- (id)fullDescription;
- (id)_entityForMidiEntity:(unsigned int)arg1 addIfNeeded:(_Bool)arg2;
- (void)addMidiSource:(unsigned int)arg1;
- (void)removeMidiSource:(unsigned int)arg1;
- (void)addMidiDestination:(unsigned int)arg1;
- (void)removeMidiDestination:(unsigned int)arg1;
- (void)entity:(id)arg1 didAddSource:(id)arg2;
- (void)entity:(id)arg1 didRemoveSource:(id)arg2;
- (void)entity:(id)arg1 didAddDestination:(id)arg2;
- (void)entity:(id)arg1 didRemoveDestination:(id)arg2;
- (id)initWithMIDIDevice:(unsigned int)arg1 delegate:(id)arg2;
- (id)supportsGeneralMMC;
- (void)resetAndDetectEntities;
- (void)addMidiEntity:(unsigned int)arg1;
- (void)removeMidiEntity:(unsigned int)arg1;

@end
