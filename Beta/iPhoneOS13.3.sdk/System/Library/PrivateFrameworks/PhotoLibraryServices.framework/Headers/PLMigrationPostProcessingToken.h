/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class PLPhotoLibraryPathManager;

@interface PLMigrationPostProcessingToken : NSObject

{
    _Bool _tokenIsKnownToBeMissing;
    PLPhotoLibraryPathManager *_pathManager;
}

- (id)initWithPathManager:(id)arg1;
- (void)writeToken;
- (id)_tokenFullPath;
- (_Bool)isTokenPresent;
- (_Bool)isTokenValid;
- (void)incrementToken;
- (void)removeToken;
- (void)invalidateCachedTokenState;
- (void)_writeTokenValue:(int)arg1;
- (int)_tokenValue;

@end
