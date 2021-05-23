/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <MediaServices/MSVAsyncOperation.h>

@class NSString;

@protocol MLMediaLibraryAccountChangeObserver;

__attribute__((visibility("hidden")))
@interface _ML3MultiUserAccountChangeOperation : MSVAsyncOperation

{
    NSString *_databasePath;
    id <MLMediaLibraryAccountChangeObserver> _accountChangeObserver;
}

@property (copy, nonatomic, readonly) NSString *databasePath;
@property (weak, nonatomic) id <MLMediaLibraryAccountChangeObserver> accountChangeObserver;

- (void)execute;
- (id)initWithDatabasePath:(id)arg1 accountChangeObserver:(id)arg2;

@end
