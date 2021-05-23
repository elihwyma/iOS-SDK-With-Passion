/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

@class NSLayoutRect, NSString;

@interface NSLayoutRectRule : NSObject

{
    NSLayoutRect *_firstLayoutRect;
    NSLayoutRect *_secondLayoutRect;
    long long _relation;
}

@property (copy, readonly) NSLayoutRect *firstLayoutRect;
@property (copy, readonly) NSLayoutRect *secondLayoutRect;
@property long long relation;
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
- (id)initWithFirstLayoutRect:(id)arg1 secondLayoutRect:(id)arg2 relation:(long long)arg3;
- (id)initWithFirstLayoutRect:(id)arg1 secondLayoutRect:(id)arg2;

@end
