/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/Swift-Protocol.h>

@class NSDictionary, NSString;

@protocol _IKJSITunesStore <Swift>

@property (nonatomic, readonly) NSString *DSID;
@property (nonatomic, readonly) NSDictionary *accountInfo;
@property (nonatomic, readonly) NSString *userAgent;
@property (nonatomic, readonly) NSString *networkConnectionType;
@property (retain, nonatomic) NSString *storefront;
@property (retain, nonatomic) NSString *cookieURL;
@property (retain, nonatomic) id cookie;
@property (nonatomic, readonly, getter=isManagedAppleID) _Bool managedAppleID;

- (unsigned short)eligibilityForService: /* Error: Ran out of types for this method. */;
- (unsigned short)getBag;
- (unsigned short)invalidateBag;
- (unsigned short)makeStoreXMLHttpRequest;
- (unsigned short)recordEvent:: /* Error: Ran out of types for this method. */;
- (unsigned short)flushUnreportedEvents;
- (unsigned short)clearCookies;
- (unsigned short)getServiceEligibility:: /* Error: Ran out of types for this method. */;
- (unsigned short)loadStoreContent:: /* Error: Ran out of types for this method. */;
- (unsigned short)evaluateScripts:: /* Error: Ran out of types for this method. */;
- (unsigned short)authenticate:: /* Error: Ran out of types for this method. */;
- (unsigned short)signOut;
- (unsigned short)updateServiceEligibility: /* Error: Ran out of types for this method. */;

@end
