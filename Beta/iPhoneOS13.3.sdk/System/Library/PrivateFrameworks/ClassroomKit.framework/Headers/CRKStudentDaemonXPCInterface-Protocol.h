/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@protocol CRKStudentDaemonXPCInterface

- (unsigned short)fetchConfigurationType: /* Error: Ran out of types for this method. */;
- (unsigned short)setAdHocConfiguration:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchAdHocConfiguration: /* Error: Ran out of types for this method. */;
- (unsigned short)setConfiguration:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchConfiguration: /* Error: Ran out of types for this method. */;
- (unsigned short)setActiveStudentIdentifier:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)studentDidAuthenticate:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchResourceFromURL:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchSetOfActiveRestrictionUUIDsForClientType:completion: /* Error: Ran out of types for this method. */;

@end
