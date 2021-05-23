/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <Foundation/NSEnumerator.h>

@class IKArray;

@interface _IKArrayEnumerator : NSEnumerator

{
    IKArray *_array;
    long long _currentIndex;
}

- (id)initWithArray:(id)arg1;
- (id)nextObject;

@end
