/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray;

@protocol _UIFocusFastScrollingIndexBarEntryTrimmerDelegate;

__attribute__((visibility("hidden")))
@interface _UIFocusFastScrollingIndexBarEntryTrimmer : NSObject

{
    NSArray *_allEntries;
    id <_UIFocusFastScrollingIndexBarEntryTrimmerDelegate> _delegate;
}

@property (copy, nonatomic) NSArray *allEntries;
@property (weak, nonatomic) id <_UIFocusFastScrollingIndexBarEntryTrimmerDelegate> delegate;

- (id)entriesTrimmedToFitCount:(unsigned long long)arg1;
- (id)_trimEntries:(id)arg1 toFitCount:(long long)arg2;

@end
