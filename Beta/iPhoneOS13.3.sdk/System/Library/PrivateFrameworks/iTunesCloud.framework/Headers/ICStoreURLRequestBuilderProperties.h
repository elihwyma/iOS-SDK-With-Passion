/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

@class ICDelegateToken, ICURLBag, NSNumber, NSString;

@interface ICStoreURLRequestBuilderProperties : NSObject

{
    NSString *_iCloudPersonID;
    ICURLBag *_URLBag;
    NSNumber *_DSID;
    NSString *_storefrontIdentifier;
    NSNumber *_delegatedDSID;
    NSString *_delegatedStorefrontIdentifier;
    ICDelegateToken *_delegateToken;
    ICURLBag *_delegatedURLBag;
}

@property (copy, nonatomic) NSString *iCloudPersonID;
@property (retain, nonatomic) ICURLBag *URLBag;
@property (copy, nonatomic) NSNumber *DSID;
@property (copy, nonatomic) NSString *storefrontIdentifier;
@property (copy, nonatomic) NSNumber *delegatedDSID;
@property (copy, nonatomic) NSString *delegatedStorefrontIdentifier;
@property (copy, nonatomic) ICDelegateToken *delegateToken;
@property (retain, nonatomic) ICURLBag *delegatedURLBag;

@end
