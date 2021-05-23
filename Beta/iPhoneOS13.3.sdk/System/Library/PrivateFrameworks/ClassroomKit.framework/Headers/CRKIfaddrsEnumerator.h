/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSEnumerator.h>

@class CRKIfaddrs;

@interface CRKIfaddrsEnumerator : NSEnumerator

{
    struct ifaddrs *mInterfaces;
    CRKIfaddrs *mCurrentInterface;
}

+ (id)enumeratorWithError:(id *)arg1;

- (id)init;
- (void)dealloc;
- (id)nextObject;
- (id)initWithError:(id *)arg1;
- (id)initWithInterfaces:(struct ifaddrs *)arg1;

@end
