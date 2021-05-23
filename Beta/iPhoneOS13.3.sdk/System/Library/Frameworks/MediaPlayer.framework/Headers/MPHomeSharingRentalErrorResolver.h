/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPAVErrorResolver.h>

#import <MediaPlayer/Swift-Protocol.h>

@class MPHomeSharingML3DataProvider, NSError, NSString, SSRentalCheckoutRequest;

@interface MPHomeSharingRentalErrorResolver : MPAVErrorResolver <Swift>

{
    unsigned long long _accountID;
    MPHomeSharingML3DataProvider *_dataProvider;
    NSError *_error;
    unsigned long long _itemID;
    unsigned long long _homeSharingID;
    unsigned long long _rentalID;
    SSRentalCheckoutRequest *_request;
}

@property (retain, nonatomic) MPHomeSharingML3DataProvider *dataProvider;
@property (nonatomic, readonly) unsigned long long itemID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)resolveError:(id)arg1;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)requestDidFinish:(id)arg1;
- (_Bool)_errorIsFairPlayError:(id)arg1;
- (id)initWithItemID:(unsigned long long)arg1 homeSharingID:(unsigned long long)arg2 rentalID:(unsigned long long)arg3 accountID:(unsigned long long)arg4;

@end
