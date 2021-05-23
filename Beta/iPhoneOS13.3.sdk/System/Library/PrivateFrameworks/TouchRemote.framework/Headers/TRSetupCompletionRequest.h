/*
 Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

#import <TouchRemote/TRRequestMessage.h>

@interface TRSetupCompletionRequest : TRRequestMessage

{
    _Bool _completedSuccessfully;
    long long _errorCode;
}

@property (nonatomic) _Bool completedSuccessfully;
@property (nonatomic) long long errorCode;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
