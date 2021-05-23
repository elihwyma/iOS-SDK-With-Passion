/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

@class ICStoreDialogResponse, NSData, NSDate, NSError;

@interface ICSecureKeyDeliveryResponse : NSObject

{
    ICStoreDialogResponse *_dialog;
    NSError *_serverError;
    NSDate *_rentalExpirationDate;
    NSDate *_rentalPlaybackStartDate;
    NSDate *_renewalDate;
    NSData *_serverPlaybackContextData;
    NSData *_contentKeyContextData;
}

@property (copy, nonatomic) ICStoreDialogResponse *dialog;
@property (copy, nonatomic) NSError *serverError;
@property (copy, nonatomic) NSDate *rentalExpirationDate;
@property (copy, nonatomic) NSDate *rentalPlaybackStartDate;
@property (copy, nonatomic) NSDate *renewalDate;
@property (copy, nonatomic) NSData *serverPlaybackContextData;
@property (copy, nonatomic) NSData *contentKeyContextData;

- (void)finishAssetResourceLoadingRequest:(id)arg1 withError:(id)arg2;

@end
