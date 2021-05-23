/*
 Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

#import <Foundation/NSDictionary.h>

@interface WLKSortedKeyDictionary : NSDictionary

{
    NSDictionary *_underlyingDictionary;
}

@property (copy, nonatomic) NSDictionary *underlyingDictionary;

- (unsigned long long)count;
- (id)objectForKey:(id)arg1;
- (id)keyEnumerator;
- (id)initWithObjects:(const id *)arg1 forKeys:(const id *)arg2 count:(unsigned long long)arg3;

@end
