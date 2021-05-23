/*
 Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
 */

#import <Foundation/NSObject.h>

@class NSCondition, NSMutableArray;

@interface TSUDateParserLibrary : NSObject

{
    unsigned long long mMaxPermittedParsers;
    unsigned long long mNumberOfUses;
    unsigned long long mParsersCreated;
    NSMutableArray *mAvailableDateParsers;
    NSCondition *mParserLibraryConditionVariable;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)_singletonAlloc;
+ (id)sharedDateParserLibrary;

- (id)init;
- (unsigned long long)retainCount;
- (id)retain;
- (oneway void)release;
- (id)autorelease;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)checkoutDateParser;
- (void)returnDateParser:(id)arg1;

@end
