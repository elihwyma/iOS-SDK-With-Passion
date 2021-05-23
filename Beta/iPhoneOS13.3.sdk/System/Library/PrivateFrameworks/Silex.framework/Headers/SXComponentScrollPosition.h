/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXScrollPosition.h>

@class NSString;

@interface SXComponentScrollPosition : SXScrollPosition

{
    NSString *_componentIdentifier;
    double _relativePageOffset;
    double _canvasWidth;
}

@property (retain, nonatomic) NSString *componentIdentifier;
@property (nonatomic) double relativePageOffset;
@property (nonatomic) double canvasWidth;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
