/*
 Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

#import <TouchRemote/TRResponseMessage.h>

@class NSSet;

@interface TRSetupConfigurationResponse : TRResponseMessage

{
    _Bool _needsNetwork;
    NSSet *_unauthenticatedAccountServices;
}

@property (nonatomic) _Bool needsNetwork;
@property (copy, nonatomic) NSSet *unauthenticatedAccountServices;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_stringFromAccountServices:(id)arg1;

@end
