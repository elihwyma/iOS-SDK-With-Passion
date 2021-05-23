/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <PencilKit/PKTool.h>

@class NSString, UIColor;

@interface PKInkingTool : PKTool

@property (nonatomic, readonly) NSString *inkType;
@property (nonatomic, readonly) UIColor *color;
@property (nonatomic, readonly) double width;

+ (id)convertColor:(id)arg1 fromUserInterfaceStyle:(long long)arg2 to:(long long)arg3;
+ (double)_weightForWidth:(double)arg1 type:(id)arg2;
+ (double)defaultWidthForInkType:(id)arg1;
+ (double)_widthForWeight:(double)arg1 type:(id)arg2;
+ (unordered_map_573a5644 *)_weightToWidthMap;
+ (CDStruct_5237edf5)_contextForStroke:(id)arg1 weight:(double)arg2 type:(id)arg3;
+ (double)_calculateWidthForWeight:(double)arg1 type:(id)arg2;
+ (void)_computeWeightToWidthMapFor:(id)arg1 in:(unordered_map_573a5644 *)arg2;
+ (double)minimumWidthForInkType:(id)arg1;
+ (double)maximumWidthForInkType:(id)arg1;
+ (double)_calculateEdgeWidthForWeight:(double)arg1 type:(id)arg2;

- (id)initWithInkType:(id)arg1 color:(id)arg2 width:(double)arg3;
- (id)initWithInkType:(id)arg1 color:(id)arg2;

@end
