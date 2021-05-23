/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface PXGPPTLayoutTester : NSObject

{
    NSArray *_inputItems;
}

@property (retain, nonatomic) NSArray *inputItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)mockPaddingValues;

- (id)generatedLayout:(id)arg1 inputItemAtIndex:(unsigned int)arg2;
- (struct CGRect)generatedLayout:(id)arg1 bestCropRectForInputItemAtIndex:(unsigned int)arg2 withAspectRatio:(double)arg3;
- (id)generatedLayout:(id)arg1 objectReferenceAtIndex:(unsigned int)arg2;
- (void)runGridLayoutTestWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)runEditorialLayoutTestWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_iterateGridConfigurationsForItemsCount:(long long)arg1 itemsIncrement:(long long)arg2 handler:(CDUnknownBlockType)arg3;
- (void)_iterateEditorialConfigurationsForItemsCount:(long long)arg1 itemsIncrement:(long long)arg2 handler:(CDUnknownBlockType)arg3;

@end
