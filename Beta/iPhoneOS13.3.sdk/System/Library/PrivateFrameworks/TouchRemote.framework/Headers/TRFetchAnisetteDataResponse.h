/*
 Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

#import <TouchRemote/TRResponseMessage.h>

@class AKAnisetteData;

@interface TRFetchAnisetteDataResponse : TRResponseMessage

{
    AKAnisetteData *_anisetteData;
}

@property (copy, nonatomic) AKAnisetteData *anisetteData;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
