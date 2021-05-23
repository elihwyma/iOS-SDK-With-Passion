/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <CameraUI/CAMBufferObservanceChange.h>

@class NSDictionary, NSObject, NSString;

@interface CAMBufferKeyValueObserverObservanceChange : CAMBufferObservanceChange

{
    NSString *_keyPath;
    NSObject *_object;
    NSDictionary *_change;
}

@property (copy, nonatomic, readonly) NSString *keyPath;
@property (weak, nonatomic, readonly) NSObject *object;
@property (copy, nonatomic, readonly) NSDictionary *change;

- (id)initWithKeyPath:(id)arg1 ofObject:(id)arg2 withChange:(id)arg3;

@end
