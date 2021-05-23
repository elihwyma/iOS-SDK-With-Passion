/*
 Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

#import <TouchRemote/TRResponseMessage.h>

@class NSError;

@interface TRErrorResponse : TRResponseMessage

{
    NSError *_error;
}

@property (retain, nonatomic) NSError *error;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
