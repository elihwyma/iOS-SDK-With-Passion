/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface SXColumnStack : NSObject

{
    NSArray *_columnStack;
}

@property (nonatomic, readonly) NSArray *columnStack;

- (id)description;
- (id)componentsBeforeComponent:(id)arg1;
- (id)initWithNumberOfColumns:(unsigned long long)arg1;
- (void)addComponentBlueprint:(id)arg1;
- (id)componentsAfterComponent:(id)arg1;
- (id)allComponentsBeforeComponent:(id)arg1;
- (id)allComponentsAfterComponent:(id)arg1;
- (unsigned long long)rangeInBounds:(struct _NSRange)arg1;

@end
