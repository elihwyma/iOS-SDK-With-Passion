/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@protocol CRKIdentityServiceInterface

- (unsigned short)publishIdentityCertificatesWithActiveMarkedCertificate:stagedMarkedCertificate:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)removeIdentityCertificatesWithKeyPairMarkers:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchCertificatesForClassKitConsumerIdentifiers:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchMyCertificatesWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchPrivateKeysWithKeyPairMarkers:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)publishIdentityPrivateKeysWithActiveMarkedPrivateKey:stagedMarkedPrivateKey:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)removeIdentityPrivateKeysWithKeyPairMarkers:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchMyOrganizationIdentifierWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchClassroomCourseIDsForASMCourseIDs:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)enableMocking:withCompletion: /* Error: Ran out of types for this method. */;

@end
