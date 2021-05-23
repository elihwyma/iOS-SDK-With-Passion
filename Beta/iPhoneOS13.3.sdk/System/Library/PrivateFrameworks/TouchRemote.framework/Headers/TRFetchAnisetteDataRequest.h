/*
 Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

#import <TouchRemote/TRRequestMessage.h>

@interface TRFetchAnisetteDataRequest : TRRequestMessage

{
    _Bool _shouldProvision;
}

@property (nonatomic) _Bool shouldProvision;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
