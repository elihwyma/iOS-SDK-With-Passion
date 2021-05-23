/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <MediaPlaybackCore/Swift-Protocol.h>

@class ICStoreDialogResponse, NSError;

@protocol ICStoreResponseProtocol <Swift>

@property (copy, nonatomic, readonly) NSError *serverError;
@property (copy, nonatomic, readonly) ICStoreDialogResponse *dialog;

@end
