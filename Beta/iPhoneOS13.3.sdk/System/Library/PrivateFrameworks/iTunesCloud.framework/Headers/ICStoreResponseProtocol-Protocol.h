/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <iTunesCloud/Swift-Protocol.h>

@class ICStoreDialogResponse, NSError;

@protocol ICStoreResponseProtocol <Swift>

@property (copy, nonatomic, readonly) NSError *serverError;
@property (copy, nonatomic, readonly) ICStoreDialogResponse *dialog;

@end
