/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

@class NSLayoutPoint, NSString;

@interface NSLayoutPointRule : NSObject

{
    NSLayoutPoint *_firstLayoutPoint;
    NSLayoutPoint *_secondLayoutPoint;
}

@property (copy, readonly) NSLayoutPoint *firstLayoutPoint;
@property (copy, readonly) NSLayoutPoint *secondLayoutPoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, readonly) NSString *identifier;
@property (copy, readonly) NSString *ruleDescription;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)makeChildRules;
- (id)initWithFirstLayoutPoint:(id)arg1 secondLayoutPoint:(id)arg2;

@end
