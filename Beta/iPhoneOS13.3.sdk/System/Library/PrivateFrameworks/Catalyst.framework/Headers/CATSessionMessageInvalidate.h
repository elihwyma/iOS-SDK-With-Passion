/*
 Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
 */

#import <Catalyst/CATSessionMessage.h>

@class NSError;

@interface CATSessionMessageInvalidate : CATSessionMessage

{
    NSError *_error;
}

@property (copy, nonatomic) NSError *error;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithError:(id)arg1;

@end
