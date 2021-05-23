/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <Foundation/NSObject.h>

#import <IDSFoundation/Swift-Protocol.h>

@class IDSCKServerChangeToken;

@interface IDSCloudKitTransportLogChangeToken : NSObject <Swift>

{
    IDSCKServerChangeToken *_ckToken;
}

@property (retain, nonatomic) IDSCKServerChangeToken *ckToken;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCKToken:(id)arg1;

@end
