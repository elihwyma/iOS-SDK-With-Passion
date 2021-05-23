/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSAttributedString, NSMutableAttributedString;

__attribute__((visibility("hidden")))
@interface _MKMultiPartLabelMetrics : NSObject

{
    NSAttributedString *_originalAttributedString;
    NSArray *_separators;
    NSArray *_components;
    NSMutableAttributedString *_attributedString;
    unsigned long long _currentSeparatorIndex;
}

@property (copy, nonatomic, readonly) NSAttributedString *originalAttributedString;
@property (copy, nonatomic, readonly) NSArray *separators;
@property (copy, nonatomic, readonly) NSArray *components;
@property (nonatomic, readonly) NSMutableAttributedString *attributedString;
@property (nonatomic) unsigned long long currentSeparatorIndex;

- (void)reset;
- (id)initWithMultiPartString:(id)arg1;
- (_Bool)replaceSeparatorAtIndex:(unsigned long long)arg1 withString:(id)arg2;
- (_Bool)_shiftLocationOfStrings:(id)arg1 startingAtIndex:(unsigned long long)arg2 shiftValue:(long long)arg3;

@end
