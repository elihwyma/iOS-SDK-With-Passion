/*
 Image: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
 */

#import <NSObject.h>

@class NSArray;

@interface TKTokenKeyAlgorithm : NSObject

{
    NSArray *_algorithms;
}

- (id)initWithAlgorithmsArray:(id)arg1;
- (_Bool)isAlgorithm:(struct __CFString *)arg1;
- (_Bool)supportsAlgorithm:(struct __CFString *)arg1;

@end
