/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <MediaServices/MSVAsyncOperation.h>

@class NSString;

@protocol MLMediaLibraryAccountChangeObserver, _ML3MultiUserDaemonAccountChangeOperationDelegate;

__attribute__((visibility("hidden")))
@interface _ML3MultiUserDaemonAccountChangeOperation : MSVAsyncOperation

{
    NSString *_initialDSID;
    NSString *_finalDSID;
    id <_ML3MultiUserDaemonAccountChangeOperationDelegate> _delegate;
    id <MLMediaLibraryAccountChangeObserver> _accountChangeObserver;
}

@property (retain, nonatomic) id <MLMediaLibraryAccountChangeObserver> accountChangeObserver;
@property (copy, nonatomic, readonly) NSString *initialDSID;
@property (copy, nonatomic, readonly) NSString *finalDSID;
@property (weak, nonatomic) id <_ML3MultiUserDaemonAccountChangeOperationDelegate> delegate;

- (void)execute;
- (id)initWithInitialDSID:(id)arg1 finalDSID:(id)arg2 accountChangeObserver:(id)arg3;

@end
