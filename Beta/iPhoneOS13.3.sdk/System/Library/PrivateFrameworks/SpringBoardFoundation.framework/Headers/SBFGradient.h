/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface SBFGradient : NSObject

{
    NSArray *_colors;
    NSArray *_locations;
    NSString *_type;
    struct CGPoint _startPoint;
    struct CGPoint _endPoint;
}

@property (copy, nonatomic) NSArray *colors;
@property (copy, nonatomic) NSArray *locations;
@property (nonatomic) struct CGPoint startPoint;
@property (nonatomic) struct CGPoint endPoint;
@property (copy, nonatomic) NSString *type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)configureLayer:(id)arg1;
- (struct CGGradient *)copyCGGradient;
- (id)cgColors;

@end
