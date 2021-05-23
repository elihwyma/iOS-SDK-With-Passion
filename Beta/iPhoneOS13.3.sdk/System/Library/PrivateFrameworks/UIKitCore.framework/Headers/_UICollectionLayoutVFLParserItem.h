/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UICollectionLayoutVFLParserItem : NSObject

{
    NSString *_name;
    double _fraction;
}

@property (copy, nonatomic) NSString *name;
@property (nonatomic) double fraction;

- (id)description;
- (_Bool)_parseWithVisualFormat:(id)arg1;
- (double)_fractionForFractionTerm:(id)arg1;
- (id)initWithVisualFormat:(id)arg1;
- (id)initWithName:(id)arg1 fraction:(double)arg2;

@end
