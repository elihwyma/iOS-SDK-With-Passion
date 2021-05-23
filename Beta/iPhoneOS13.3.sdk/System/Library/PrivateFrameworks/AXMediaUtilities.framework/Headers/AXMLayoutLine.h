/*
 Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

#import <AXMediaUtilities/AXMLayoutItem.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface AXMLayoutLine : AXMLayoutItem

{
    NSMutableArray *_sequences;
}

+ (id)line:(id)arg1;

- (struct CGRect)frame;
- (id)sequences;
- (struct CGRect)normalizedFrame;
- (void)addSequence:(id)arg1;

@end
