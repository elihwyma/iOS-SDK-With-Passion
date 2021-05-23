/*
 Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

#import <Foundation/NSObject.h>

@class NSData, NSDictionary, NSSet, NSUUID, SFDevice, SFSession;

@interface SFMessage : NSObject

{
    NSUUID *_identifier;
    SFDevice *_peerDevice;
    _Bool _expectsResponse;
    NSData *_bodyData;
    CDUnknownBlockType _completionHandler;
    NSDictionary *_headerFields;
    SFSession *_session;
    struct NSSet *_deviceIDs;
}

@property (copy, nonatomic) NSSet *deviceIDs;
@property (copy, nonatomic) NSUUID *identifier;
@property (retain, nonatomic) SFSession *session;
@property (copy, nonatomic) NSData *bodyData;
@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (nonatomic) _Bool expectsResponse;
@property (copy, nonatomic) NSDictionary *headerFields;
@property (retain, nonatomic) SFDevice *peerDevice;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)invalidate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
