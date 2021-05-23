/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

@class NSLayoutAnchor, NSString;

@interface NSLayoutAnchorRule : NSObject

{
    NSLayoutAnchor *_firstAnchor;
    NSLayoutAnchor *_secondAnchor;
    long long _relation;
    NSString *_identifier;
    double _constant;
    double _multiplier;
    float _priority;
}

@property (copy, readonly) NSLayoutAnchor *firstAnchor;
@property (copy, readonly) NSLayoutAnchor *secondAnchor;
@property (readonly) long long relation;
@property (readonly) double constant;
@property (readonly) double multiplier;
@property (readonly) float priority;
@property (copy, readonly) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, readonly) NSString *ruleDescription;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)makeChildRules;
- (id)makeLayoutConstraint;
- (id)initWithFirstAnchor:(id)arg1 secondAnchor:(id)arg2 relation:(long long)arg3 multiplier:(double)arg4 constant:(double)arg5 priority:(float)arg6 identifier:(id)arg7;

@end
