/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@interface _PLPhotoLibraryFileReservation : NSObject

{
    int _fileDescriptor;
}

@property (nonatomic) int fileDescriptor;

- (void)dealloc;
- (id)initWithFileDescriptor:(int)arg1;

@end
