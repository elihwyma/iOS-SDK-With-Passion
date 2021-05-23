/*
 Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString;

@interface DAResolvedRecipient : NSObject

{
    long long _status;
    long long _certificatesStatus;
    long long _availabilityStatus;
    NSString *_mergedFreeBusy;
    NSMutableDictionary *_mResolvedEmailToX509Certs;
}

@property (nonatomic) long long status;
@property (nonatomic) long long certificatesStatus;
@property (retain, nonatomic) NSMutableDictionary *mResolvedEmailToX509Certs;
@property (nonatomic) long long availabilityStatus;
@property (retain, nonatomic) NSString *mergedFreeBusy;
@property (nonatomic, readonly) NSDictionary *resolvedEmailToX509Certs;

- (id)description;
- (void)addCert:(id)arg1 forEmailAddress:(id)arg2;

@end
