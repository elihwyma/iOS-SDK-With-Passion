/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSMutableArray;

@interface PXDebugValueList : NSObject <Swift>

{
    NSMutableArray *_debugValues;
}

@property (nonatomic, readonly) NSMutableArray *debugValues;

- (id)init;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)addValueWithLabel:(id)arg1;
- (void)addValueWithLabel:(id)arg1 boolValue:(_Bool)arg2 positiveValue:(_Bool)arg3 positiveHighlighted:(_Bool)arg4 negativeHighlighted:(_Bool)arg5;
- (void)addValueWithLabel:(id)arg1 boolValue:(_Bool)arg2;
- (void)addValueWithLabel:(id)arg1 doubleValue:(double)arg2;
- (void)addValueWithLabel:(id)arg1 integerValue:(long long)arg2;
- (void)addValueWithLabel:(id)arg1 stringValue:(id)arg2 highlightStyle:(unsigned long long)arg3;
- (void)addValueWithLabel:(id)arg1 stringValue:(id)arg2;
- (void)addValueWithLabel:(id)arg1 highlightedScore:(double)arg2;

@end
