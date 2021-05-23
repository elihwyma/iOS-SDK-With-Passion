/*
 Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

#import <AXMediaUtilities/AXMLayoutItem.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface AXMLayoutRegion : AXMLayoutItem

{
    NSMutableArray *_lines;
}

+ (id)region:(id)arg1;

- (struct CGRect)frame;
- (id)lines;
- (void)addLine:(id)arg1;
- (struct CGRect)normalizedFrame;
- (id)firstLine;

@end
