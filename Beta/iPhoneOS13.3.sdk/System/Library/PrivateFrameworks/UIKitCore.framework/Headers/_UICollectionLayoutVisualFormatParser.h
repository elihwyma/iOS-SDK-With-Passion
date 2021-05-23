/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _UICollectionLayoutVisualFormatParser : NSObject

{
    int _axis;
    NSString *_visualFormat;
    NSString *_name;
    NSArray *_items;
}

@property (nonatomic) int axis;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *visualFormat;
@property (copy, nonatomic) NSArray *items;

+ (int)axisForVisualFormat:(id)arg1;
+ (id)parserWithVisualFormat:(id)arg1;
+ (id)parsersWithVisualFormats:(id)arg1 seperatedByDelimiter:(id)arg2;

- (id)description;
- (id)initWithVisualFormat:(id)arg1;
- (void)_parse;

@end
