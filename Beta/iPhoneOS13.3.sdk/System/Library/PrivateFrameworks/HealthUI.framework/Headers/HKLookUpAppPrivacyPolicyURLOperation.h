/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSOperation.h>

@class NSError, NSString, NSURL, SSLookupRequest;

@interface HKLookUpAppPrivacyPolicyURLOperation : NSOperation

{
    _Bool _executing;
    _Bool _finished;
    NSString *_bundleIdentifier;
    NSURL *_privacyPolicyURL;
    NSError *_error;
    SSLookupRequest *_lookupRequest;
}

@property (getter=isExecuting) _Bool executing;
@property (getter=isFinished) _Bool finished;
@property (copy) NSURL *privacyPolicyURL;
@property (copy) NSError *error;
@property (retain) SSLookupRequest *lookupRequest;
@property (copy, nonatomic, readonly) NSString *bundleIdentifier;

- (id)init;
- (id)description;
- (id)debugDescription;
- (void)cancel;
- (void)start;
- (_Bool)isAsynchronous;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)_privacyPolicyURLFromLookupResult:(id)arg1 lookupError:(id)arg2 error:(id *)arg3;
- (void)_performLookup;

@end
