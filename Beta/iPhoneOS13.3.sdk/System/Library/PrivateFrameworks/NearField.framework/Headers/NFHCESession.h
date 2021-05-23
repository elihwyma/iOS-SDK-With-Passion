/*
 Image: /System/Library/PrivateFrameworks/NearField.framework/NearField
 */

#import <NearField/NFSession.h>

#import <NearField/Swift-Protocol.h>

@class NFWeakReference, NSString;

@protocol NFHCESessionDelegate;

@interface NFHCESession : NFSession <Swift>

{
    NFWeakReference *_delegate;
}

@property id <NFHCESessionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)endSession;
- (void)didEndUnexpectedly;
- (id)readAPDU:(id *)arg1;
- (void)didReceiveAPDU:(id)arg1;
- (void)didConnectToReader;
- (void)didDisconnectFromReader;
- (id)startEmulation;
- (id)stopEmulation;
- (id)sendAPDU:(id)arg1;

@end
