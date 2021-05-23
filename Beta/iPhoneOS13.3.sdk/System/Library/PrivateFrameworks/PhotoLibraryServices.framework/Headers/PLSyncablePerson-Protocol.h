/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/Swift-Protocol.h>

@class NSString;

@protocol PLSyncablePerson <Swift>

@property (retain, nonatomic) NSString *personUUID;
@property (retain, nonatomic) NSString *fullName;
@property (nonatomic, readonly) _Bool userVerified;
@property (nonatomic, readonly) _Bool graphVerified;
@property (nonatomic, readonly) _Bool isTombstone;
@property (nonatomic, readonly) _Bool keyFaceIsPicked;

- (unsigned short)pointerDescription;
- (unsigned short)syncDescription;
- (unsigned short)setKeyFaceToPicked;

@end
