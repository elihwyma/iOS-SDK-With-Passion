/*
 Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <Foundation/NSObject.h>

@class AXMIDIDeviceEntity, NSNumber, NSString;

@interface AXMIDIDeviceEntityEndpoint : NSObject

{
    unsigned int _midiEndpoint;
    AXMIDIDeviceEntity *_entity;
}

@property (nonatomic) unsigned int midiEndpoint;
@property (weak, nonatomic) AXMIDIDeviceEntity *entity;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *manufacturer;
@property (nonatomic, readonly) NSString *model;
@property (nonatomic, readonly) NSNumber *uniqueID;
@property (nonatomic, readonly) NSNumber *receiveChannels;
@property (nonatomic, readonly) NSNumber *transmitChannels;
@property (nonatomic, readonly) NSNumber *isEmbedded;
@property (nonatomic, readonly) NSNumber *isBroadcast;
@property (nonatomic, readonly) NSNumber *isOffline;
@property (nonatomic, readonly) NSNumber *isPrivate;
@property (nonatomic, readonly) NSString *driverName;

- (id)description;
- (id)initWithMIDIEndpoint:(unsigned int)arg1 entity:(id)arg2;

@end
