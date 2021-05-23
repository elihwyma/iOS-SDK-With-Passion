/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface NSDocumentDifferenceSize : NSObject

{
    long long _generationCount;
    long long _changeCount;
}

@property (nonatomic) long long generationCount;
@property (nonatomic) long long changeCount;

- (id)description;

@end
