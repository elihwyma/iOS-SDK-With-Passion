/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <Foundation/NSObject.h>

#import <MediaPlaybackCore/Swift-Protocol.h>

@class ICRadioContentReference, MPIdentifierSet;

@interface MPCModelRadioContentReference : NSObject <Swift>

{
    ICRadioContentReference *_ICRadioContentReference;
    MPIdentifierSet *_referenceModelObjectIdentifiers;
}

@property (nonatomic, readonly) ICRadioContentReference *ICRadioContentReference;
@property (nonatomic, readonly) MPIdentifierSet *referenceModelObjectIdentifiers;

+ (_Bool)supportsSecureCoding;
+ (id)referenceWithMPModelObject:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithICRadioContentReference:(id)arg1;

@end
