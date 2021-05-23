/*
 Image: /System/Library/PrivateFrameworks/NearField.framework/NearField
 */

#import <NearField/Swift-Protocol.h>

@class NSData;

@protocol NFTagA, NFTagB, NFTagF;

@protocol NFTag <Swift>

@property (nonatomic, readonly) unsigned int type;
@property (nonatomic, readonly) unsigned int technology;
@property (copy, nonatomic, readonly) NSData *tagID;
@property (copy, nonatomic, readonly) NSData *UID;
@property (nonatomic, readonly) unsigned int ndefAvailability;
@property (nonatomic, readonly) unsigned long long ndefMessageSize;
@property (nonatomic, readonly) unsigned long long ndefContainerSize;
@property (copy, nonatomic, readonly) NSData *AppData;
@property (nonatomic, readonly) id <NFTagA> tagA;
@property (nonatomic, readonly) id <NFTagB> tagB;
@property (nonatomic, readonly) id <NFTagF> tagF;

- (unsigned short)description;
- (unsigned short)initWithNFTag: /* Error: Ran out of types for this method. */;
- (unsigned short)isEqualToNFTag: /* Error: Ran out of types for this method. */;

@end
