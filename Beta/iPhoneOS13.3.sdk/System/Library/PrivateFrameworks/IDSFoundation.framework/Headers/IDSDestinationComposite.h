/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <IDSFoundation/IDSDestination.h>

@class NSArray;

@interface IDSDestinationComposite : IDSDestination

{
    NSArray *_destinations;
}

@property (nonatomic, readonly) NSArray *destinations;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)groupID;
- (id)destinationURIs;
- (id)initWithDestinations:(id)arg1;

@end
