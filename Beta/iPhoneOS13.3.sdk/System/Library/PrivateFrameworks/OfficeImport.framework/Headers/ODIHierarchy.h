/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, ODIState;

__attribute__((visibility("hidden")))
@interface ODIHierarchy : NSObject

{
    int mType;
    int mMaxMappableTreeDepth;
    ODIState *mState;
    NSMutableDictionary *mNodeInfoMap;
}

+ (_Bool)mapIdentifier:(id)arg1 state:(id)arg2;

- (void)map;
- (id)initWithType:(int)arg1 state:(id)arg2;
- (struct ODIHRangeVector *)mapRangesForNode:(id)arg1;
- (void)mapLogicalBoundsWithXRanges:(const struct ODIHRangeVector *)arg1;
- (id)infoForNode:(id)arg1;
- (void)createInfoForNode:(id)arg1 depth:(int)arg2;
- (void)setAbsolutePositionOfNode:(id)arg1 parentRow:(int)arg2 parentXOffset:(float)arg3;
- (struct CGRect)boundsOfNode:(id)arg1;
- (void)mapNode:(id)arg1;

@end
