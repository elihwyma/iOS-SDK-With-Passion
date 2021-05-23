/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class ODIState;

__attribute__((visibility("hidden")))
@interface ODIHorizonalList3 : NSObject

{
    unsigned int mMaxPointCount;
    ODIState *mState;
}

+ (_Bool)mapIdentifier:(id)arg1 state:(id)arg2;

- (void)map;
- (id)initWithState:(id)arg1;
- (void)mapRoofStyleFromPoint:(id)arg1 shape:(id)arg2;
- (void)mapOnePillarStyleFromPoint:(id)arg1 shape:(id)arg2;
- (void)mapPillarPoints:(id)arg1 bounds:(struct CGRect)arg2;
- (void)mapBaseStyleFromPoint:(id)arg1 shape:(id)arg2;
- (void)setMaxPointCount:(unsigned int)arg1;

@end
