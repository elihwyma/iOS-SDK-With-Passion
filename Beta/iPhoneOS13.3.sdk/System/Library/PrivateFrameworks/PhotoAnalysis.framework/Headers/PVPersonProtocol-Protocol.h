/*
 Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

#import <PhotoAnalysis/Swift-Protocol.h>

@class NSString;

@protocol PVFaceProtocol;

@protocol PVPersonProtocol <Swift>

@property (nonatomic, readonly) NSString *localIdentifier;
@property (nonatomic, readonly) unsigned long long faceCount;
@property (nonatomic, readonly) _Bool favorite;
@property (nonatomic, readonly) _Bool hidden;
@property (nonatomic, readonly) NSString *anonymizedName;
@property (nonatomic, readonly) long long verifiedType;
@property (nonatomic) _Bool isVerified;
@property (nonatomic) long long manualOrder;
@property (retain, nonatomic) id <PVFaceProtocol> keyFace;

- (unsigned short)personLocalIdentifiers;
- (unsigned short)pv_addMergeCandidatePersons: /* Error: Ran out of types for this method. */;

@end
