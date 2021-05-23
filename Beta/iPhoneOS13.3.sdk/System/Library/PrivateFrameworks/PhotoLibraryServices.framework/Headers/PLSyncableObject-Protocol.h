/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/Swift-Protocol.h>

@protocol PLSyncableObject <Swift>

@property (retain, nonatomic, readonly) id localID;
@property (nonatomic) short cloudLocalState;

- (unsigned short)momentShare;
- (unsigned short)cplFullRecord;

@end
