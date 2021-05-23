/*
 Image: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
 */

#import <Foundation/NSObject.h>

@class NSData;

@interface KTLoggableData : NSObject

{
    _Bool _successfulSync;
    _Bool _marked;
    NSData *_deviceID;
    NSData *_clientData;
    NSData *_deviceVRFOutput;
    NSData *_clientDataVRFOutput;
}

@property (retain) NSData *deviceVRFOutput;
@property (retain) NSData *clientDataVRFOutput;
@property (retain) NSData *clientData;
@property (copy) NSData *deviceID;
@property _Bool successfulSync;
@property _Bool marked;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithClientData:(id)arg1;

@end
