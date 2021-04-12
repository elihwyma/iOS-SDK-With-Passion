//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _UICollectionLayoutVisualFormatParser : NSObject
{
    int _axis;
    NSString *_visualFormat;
    NSString *_name;
    NSArray *_items;
}

+ (int)axisForVisualFormat:(id)arg1;
+ (id)parsersWithVisualFormats:(id)arg1 seperatedByDelimiter:(id)arg2;
+ (id)parserWithVisualFormat:(id)arg1;
@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) int axis; // @synthesize axis=_axis;
@property(copy, nonatomic) NSString *visualFormat; // @synthesize visualFormat=_visualFormat;
// - (void).cxx_destruct;
- (void)_parse;
- (id)description;
- (id)initWithVisualFormat:(id)arg1;

@end

