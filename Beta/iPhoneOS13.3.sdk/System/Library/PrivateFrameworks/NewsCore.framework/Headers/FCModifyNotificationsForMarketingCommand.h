/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCCommand.h>

@class NSString;

@interface FCModifyNotificationsForMarketingCommand : FCCommand

{
    int _type;
    int _action;
    NSString *_dsid;
}

@property (nonatomic) int type;
@property (nonatomic) int action;
@property (copy, nonatomic) NSString *dsid;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1 delegate:(id)arg2 qualityOfService:(long long)arg3;
- (id)initWithType:(int)arg1 action:(int)arg2 iTunesDSID:(id)arg3;

@end
