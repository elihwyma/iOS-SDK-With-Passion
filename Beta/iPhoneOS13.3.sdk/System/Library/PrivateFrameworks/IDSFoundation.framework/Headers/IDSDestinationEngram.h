/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <IDSFoundation/IDSDestination.h>

@class ENGroup;

@interface IDSDestinationEngram : IDSDestination

{
    ENGroup *_underlyingGroup;
}

@property (retain, nonatomic, readonly) ENGroup *underlyingGroup;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)groupID;
- (id)destinationURIs;
- (id)initWithENGroup:(id)arg1;

@end
