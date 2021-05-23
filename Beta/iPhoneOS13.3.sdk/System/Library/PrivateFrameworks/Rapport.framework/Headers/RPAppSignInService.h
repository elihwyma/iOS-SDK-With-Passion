/*
 Image: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, SFService;

@protocol OS_dispatch_queue;

@interface RPAppSignInService : NSObject

{
    _Bool _activateCalled;
    SFService *_bleAdvertiser;
    _Bool _invalidateCalled;
    _Bool _invalidateDone;
    unsigned int _flags;
    NSString *_appName;
    NSString *_appBundleID;
    NSArray *_associatedDomains;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

@property (copy, nonatomic) NSString *appName;
@property (copy, nonatomic) NSString *appBundleID;
@property (copy, nonatomic) NSArray *associatedDomains;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) unsigned int flags;

- (id)init;
- (id)description;
- (void)_activate;
- (void)invalidate;
- (void)_invalidate;
- (void)_invalidated;
- (void)activate;

@end
