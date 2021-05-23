/*
 Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

#import <TouchRemote/TRRequestMessage.h>

@class NSData;

@interface TRSyncAnisetteDataRequest : TRRequestMessage

{
    NSData *_simData;
}

@property (copy, nonatomic) NSData *simData;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
