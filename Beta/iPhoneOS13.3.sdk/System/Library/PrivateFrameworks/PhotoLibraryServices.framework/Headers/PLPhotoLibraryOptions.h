/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@interface PLPhotoLibraryOptions : NSObject

{
    _Bool _automaticallyMergesContext;
    _Bool _preventsWaitingForRequiredState;
    int _libraryRole;
    long long _requiredState;
}

@property (nonatomic) _Bool automaticallyMergesContext;
@property (nonatomic) long long requiredState;
@property (nonatomic) int libraryRole;
@property (nonatomic) _Bool preventsWaitingForRequiredState;

@end
