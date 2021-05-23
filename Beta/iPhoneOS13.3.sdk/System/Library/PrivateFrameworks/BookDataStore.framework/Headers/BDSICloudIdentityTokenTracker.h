/*
 Image: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
 */

#import <Foundation/NSObject.h>

@class BDSICloudIdentityToken, NSMutableDictionary, NSURL;

@protocol OS_dispatch_queue;

@interface BDSICloudIdentityTokenTracker : NSObject

{
    _Bool _trackLiverpool;
    NSMutableDictionary *_plistContents;
    NSURL *_plistURL;
    BDSICloudIdentityToken *_currentToken;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

@property (retain, nonatomic) NSMutableDictionary *plistContents;
@property (retain, nonatomic) NSURL *plistURL;
@property (retain, nonatomic) BDSICloudIdentityToken *currentToken;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) _Bool trackLiverpool;

- (id)initWithContainerURL:(id)arg1 trackingLiverpool:(_Bool)arg2;
- (void)fetchCurrentToken;
- (void)forceUpdateTokenWithString:(id)arg1;
- (_Bool)didUnacknowledgediCloudLogoutOccur;
- (void)acknowledgeiCloudIdentity;

@end
