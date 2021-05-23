/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <Foundation/NSObject.h>

#import <GameCenterFoundation/Swift-Protocol.h>

@interface GKInternalRepresentation : NSObject <Swift>

+ (_Bool)supportsSecureCoding;
+ (id)internalRepresentation;
+ (id)secureCodedPropertyKeys;
+ (id)codedPropertyKeys;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_gkDescriptionWithChildren:(int)arg1;
- (id)serverRepresentation;
- (id)descriptionSubstitutionMap;
- (void)mergePropertiesFrom:(id)arg1;

@end
