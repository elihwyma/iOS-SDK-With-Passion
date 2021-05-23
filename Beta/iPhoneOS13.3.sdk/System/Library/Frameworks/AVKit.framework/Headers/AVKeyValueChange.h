/*
 Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

#import <NSObject.h>

@class NSString;

@interface AVKeyValueChange : NSObject

{
    id _value;
    id _oldValue;
    NSString *_keyPath;
    id _observationToken;
}

@property (nonatomic, readonly) id value;
@property (nonatomic, readonly) id oldValue;
@property (nonatomic, readonly) NSString *keyPath;
@property (nonatomic, readonly) id observationToken;

- (id)initWithValue:(id)arg1 oldValue:(id)arg2 keyPath:(id)arg3 observationToken:(id)arg4;

@end
