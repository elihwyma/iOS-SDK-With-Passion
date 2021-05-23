/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCCommand.h>

@class NSString;

@interface FCSubscribeToEmailCommand : FCCommand

{
    NSString *_DSID;
    NSString *_storeFrontID;
    NSString *_primaryLanguage;
}

@property (copy, nonatomic) NSString *DSID;
@property (copy, nonatomic) NSString *storeFrontID;
@property (copy, nonatomic) NSString *primaryLanguage;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1 delegate:(id)arg2 qualityOfService:(long long)arg3;
- (id)initWithDSID:(id)arg1 storeFrontID:(id)arg2 primaryLanguage:(id)arg3;

@end
