/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXComponentScrollPosition.h>

@interface SXTextComponentScrollPosition : SXComponentScrollPosition

{
    long long _characterIndex;
    double _relativeTextOffset;
}

@property (nonatomic) long long characterIndex;
@property (nonatomic) double relativeTextOffset;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
