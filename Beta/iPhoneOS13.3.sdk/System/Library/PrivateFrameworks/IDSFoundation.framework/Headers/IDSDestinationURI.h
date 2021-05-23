/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <IDSFoundation/IDSDestination.h>

@class IDSURI;

@interface IDSDestinationURI : IDSDestination

{
    IDSURI *_uri;
}

@property (nonatomic, readonly) IDSURI *uri;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)groupID;
- (id)initWithURI:(id)arg1;
- (id)destinationURIs;
- (id)initWithURIString:(id)arg1;

@end
