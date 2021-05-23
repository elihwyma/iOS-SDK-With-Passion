/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <Foundation/NSOperation.h>

@class ML3ActiveTransaction, ML3Client, ML3MediaLibraryWriter, ML3MusicLibrary, NSDictionary, NSError;

@interface ML3DatabaseOperation : NSOperation

{
    ML3MediaLibraryWriter *_writer;
    ML3ActiveTransaction *_transaction;
    _Bool _beganNewTransaction;
    _Bool _success;
    unsigned long long _type;
    ML3MusicLibrary *_library;
    ML3Client *_originatingClient;
    NSDictionary *_options;
    NSDictionary *_attributes;
    NSError *_error;
}

@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) ML3MusicLibrary *library;
@property (retain, nonatomic) ML3Client *originatingClient;
@property (copy, nonatomic) NSDictionary *options;
@property (copy, nonatomic) NSDictionary *attributes;
@property (nonatomic, readonly) ML3ActiveTransaction *transaction;
@property (nonatomic, readonly) _Bool success;
@property (nonatomic, readonly) NSError *error;

+ (id)databaseOperationForType:(unsigned long long)arg1 withLibrary:(id)arg2 writer:(id)arg3;

- (id)description;
- (void)main;
- (void)setError:(id)arg1;
- (void)setSuccess:(_Bool)arg1;
- (_Bool)_execute:(id *)arg1;
- (_Bool)_verifyLibraryConnectionAndAttributesProperties:(id *)arg1;
- (id)initWithLibrary:(id)arg1 writer:(id)arg2;
- (id)_operationTypeDescription;

@end
