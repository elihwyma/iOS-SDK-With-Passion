/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSMutableSet, UIColor;

__attribute__((visibility("hidden")))
@interface _UIFocusRegionMapEntry : NSObject <Swift>

{
    _UIFocusRegionMapEntry *_originalEntry;
    _UIFocusRegionMapEntry *_parentEntry;
    NSMutableSet *_occludingFrames;
    struct CGRect _frame;
    struct CGRect _originalRegionFrame;
}

@property (copy, nonatomic, readonly) UIColor *visualRepresentationColor;
@property (nonatomic, readonly) long long visualRepresentationPatternType;
@property (nonatomic) struct CGRect frame;
@property (nonatomic) struct CGRect originalRegionFrame;
@property (retain, nonatomic) _UIFocusRegionMapEntry *originalEntry;
@property (retain, nonatomic) _UIFocusRegionMapEntry *parentEntry;
@property (retain, nonatomic) NSMutableSet *occludingFrames;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFrame:(struct CGRect)arg1 originalRegionFrame:(struct CGRect)arg2;
- (id)_mapEntriesByOccludingWithFrame:(struct CGRect)arg1;
- (id)sliceWithFrame:(struct CGRect)arg1;
- (void)_wasOccludedByFrame:(struct CGRect)arg1;
- (id)_uniqueElementFromArray:(id)arg1 forKey:(id)arg2;

@end
