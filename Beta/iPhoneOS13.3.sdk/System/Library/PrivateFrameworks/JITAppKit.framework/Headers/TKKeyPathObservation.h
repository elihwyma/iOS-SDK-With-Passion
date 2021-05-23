/*
 Image: /System/Library/PrivateFrameworks/JITAppKit.framework/JITAppKit
 */

#import <NSObject.h>

@class NSString;

@interface TKKeyPathObservation : NSObject

{
    NSObject *_object;
    NSString *_keyPath;
}

@property (weak, nonatomic) NSObject *object;
@property (copy, nonatomic) NSString *keyPath;

@end
