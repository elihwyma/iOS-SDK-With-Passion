/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSString;

__attribute__((visibility("hidden")))
@interface UIKeyboardSliceSet : NSObject

{
    NSString *_ssid;
    NSMutableSet *_slices;
    struct CGRect _startRect;
    struct CGRect _endRect;
    double _leftWidth;
    double _rightWidth;
    double _mergePoint;
    NSMutableDictionary *_controlKeys;
}

@property (readonly) NSMutableSet *slices;
@property (retain) NSString *sliceSetID;
@property struct CGRect startRect;
@property struct CGRect endRect;
@property double leftWidth;
@property double rightWidth;
@property double mergePoint;
@property (retain) NSMutableDictionary *controlKeys;

+ (id)sliceSetWithDictionaryRepresenation:(id)arg1;

- (void)dealloc;
- (id)description;
- (void)addSlice:(id)arg1;
- (id)initWithSliceID:(id)arg1;

@end
