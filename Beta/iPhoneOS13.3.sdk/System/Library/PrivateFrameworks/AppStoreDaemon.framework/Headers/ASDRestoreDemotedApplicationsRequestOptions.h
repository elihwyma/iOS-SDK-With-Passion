/*
 Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

#import <AppStoreDaemon/ASDRequestOptions.h>

@class NSArray, NSNumber, NSString;

@interface ASDRestoreDemotedApplicationsRequestOptions : ASDRequestOptions

{
    NSNumber *_accountID;
    NSString *_appleID;
    NSArray *_bundleIDs;
}

@property (nonatomic, readonly) NSNumber *accountID;
@property (nonatomic, readonly) NSString *appleID;
@property (copy, nonatomic) NSArray *bundleIDs;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBundleIDs:(id)arg1;
- (id)initWithAccountID:(id)arg1 appleID:(id)arg2;

@end
