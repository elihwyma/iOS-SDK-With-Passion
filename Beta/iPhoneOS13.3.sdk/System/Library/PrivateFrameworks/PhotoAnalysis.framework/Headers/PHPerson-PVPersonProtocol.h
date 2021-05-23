/*
 Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

#import <Photos/PHPerson.h>

@class NSString;

@protocol PVFaceProtocol;

@interface PHPerson (PVPersonProtocol)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *localIdentifier;
@property (nonatomic, readonly) unsigned long long faceCount;
@property (nonatomic, readonly) _Bool favorite;
@property (nonatomic, readonly) _Bool hidden;
@property (nonatomic, readonly) NSString *anonymizedName;
@property (nonatomic, readonly) long long verifiedType;
@property (nonatomic) _Bool isVerified;
@property (nonatomic) long long manualOrder;
@property (retain, nonatomic) id <PVFaceProtocol> keyFace;

- (id)personLocalIdentifiers;
- (void)pv_addMergeCandidatePersons:(id)arg1;

@end
