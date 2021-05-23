/*
 Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

#import <TouchRemote/TRRequestMessage.h>

@class NSString;

@interface TRLegacyAnisetteDataRequest : TRRequestMessage

{
    NSString *_dsid;
}

@property (copy, nonatomic) NSString *dsid;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
