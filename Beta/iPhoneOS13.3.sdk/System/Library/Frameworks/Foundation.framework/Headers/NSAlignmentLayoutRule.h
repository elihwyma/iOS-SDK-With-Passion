/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface NSAlignmentLayoutRule : NSObject

{
    NSArray *_alignedAnchors;
}

@property (copy, readonly) NSArray *alignedAnchors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, readonly) NSString *identifier;
@property (copy, readonly) NSString *ruleDescription;

+ (id)alignmentWithAnchors:(id)arg1;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)makeChildRules;
- (id)initWithAlignedAnchors:(id)arg1;

@end
