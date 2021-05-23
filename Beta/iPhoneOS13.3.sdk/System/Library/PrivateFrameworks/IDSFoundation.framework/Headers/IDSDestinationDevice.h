/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <IDSFoundation/IDSDestination.h>

@class IDSURI;

@interface IDSDestinationDevice : IDSDestination

{
    IDSURI *_destinationURI;
    _Bool _isGuest;
}

@property (retain, nonatomic) IDSURI *destinationURI;
@property (nonatomic) _Bool isGuest;

+ (_Bool)supportsSecureCoding;
+ (_Bool)isDeviceURI:(id)arg1;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)groupID;
- (id)destinationURIs;
- (id)initWithDeviceURI:(id)arg1;
- (id)initWithRapportPublicIdentifierURI:(id)arg1;
- (id)initWithIDSDeviceURI:(id)arg1;
- (_Bool)isDevice;
- (id)initWithURI:(id)arg1 isGuest:(_Bool)arg2;

@end
