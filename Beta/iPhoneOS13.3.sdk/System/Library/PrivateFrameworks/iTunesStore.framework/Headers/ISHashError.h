/*
 Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface ISHashError : NSObject

{
    NSString *_actualHashString;
    NSString *_expectedHashString;
    long long _rangeEnd;
    long long _rangeStart;
}

@property (copy, nonatomic) NSString *actualHashString;
@property (copy, nonatomic) NSString *expectedHashString;
@property (nonatomic) long long rangeEnd;
@property (nonatomic) long long rangeStart;
@property (nonatomic, readonly) NSString *hashFailureHeaderString;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
