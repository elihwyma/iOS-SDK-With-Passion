/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <MusicLibrary/ML3DatabaseImport.h>

@class ML3Client, ML3MediaLibraryWriter, ML3MusicLibrary;

@interface ML3ServiceDatabaseImport : ML3DatabaseImport

{
    ML3MusicLibrary *_library;
    ML3MediaLibraryWriter *_writer;
    ML3Client *_client;
}

@property (nonatomic, readonly) ML3MusicLibrary *library;
@property (nonatomic, readonly) ML3MediaLibraryWriter *writer;
@property (nonatomic, readonly) ML3Client *client;

- (id)initWithDatabaseImport:(id)arg1 library:(id)arg2 writer:(id)arg3 client:(id)arg4;

@end
