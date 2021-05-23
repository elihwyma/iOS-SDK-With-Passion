/*
 Image: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
 */

#import <Foundation/NSObject.h>

@class NSData, NSDate;

@interface KTClientDataRecord : NSObject

{
    _Bool _verified;
    NSData *_clientData;
    unsigned long long _applicationVersion;
    NSData *_clientDataVRFOutput;
    NSDate *_markedForDeletion;
    NSDate *_deletionEscrowExpiry;
    NSDate *_addedDate;
}

@property (retain) NSData *clientData;
@property unsigned long long applicationVersion;
@property (retain) NSData *clientDataVRFOutput;
@property (retain) NSDate *markedForDeletion;
@property (retain) NSDate *deletionEscrowExpiry;
@property (retain) NSDate *addedDate;
@property _Bool verified;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMutation:(id)arg1;
- (id)initWithSingleDataRecord:(id)arg1;

@end
