/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <MusicLibrary/_ML3DatabaseConnectionPoolDiagnostic.h>

@class NSArray;

@interface _ML3MutableDatabaseConnectionPoolDiagnostic : _ML3DatabaseConnectionPoolDiagnostic

@property (copy, nonatomic) NSArray *readerAvailableConnections;
@property (copy, nonatomic) NSArray *readerBusyConnections;
@property (copy, nonatomic) NSArray *writerAvailableConnections;
@property (copy, nonatomic) NSArray *writerBusyConnections;

@end
