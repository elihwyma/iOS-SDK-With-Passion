/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSPObject.h>

@class NSString, TSTLayoutHint;

@interface TSTArchivedLayoutHint : TSPObject

{
    TSTLayoutHint *mHint;
}

@property (retain, nonatomic) TSTLayoutHint *hint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithContext:(id)arg1 hint:(id)arg2;

@end
