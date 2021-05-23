/*
 Image: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
 */

#import <Rapport/RPEndpoint.h>

@class NSString;

@interface RPRemoteDisplayDevice : RPEndpoint

{
    unsigned int _flags;
    NSString *_persistentIdentifier;
}

@property (copy, nonatomic) NSString *persistentIdentifier;
@property (nonatomic, readonly) unsigned int flags;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)descriptionWithLevel:(int)arg1;
- (unsigned int)updateWithEndpoint:(id)arg1;

@end
