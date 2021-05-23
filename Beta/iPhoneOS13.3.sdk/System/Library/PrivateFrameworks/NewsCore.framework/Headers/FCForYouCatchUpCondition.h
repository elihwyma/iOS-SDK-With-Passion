/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@interface FCForYouCatchUpCondition : NSObject

{
    long long _contentTypes;
    CDUnknownBlockType _testBlock;
}

@property (nonatomic) long long contentTypes;
@property (copy, nonatomic) CDUnknownBlockType testBlock;

+ (id)caughtUpWithContentTypes:(long long)arg1 orPassingTestBlock:(CDUnknownBlockType)arg2;
+ (id)caughtUpWithContentTypes:(long long)arg1;

- (_Bool)isSatisfiedWithCatchUpOperation:(id)arg1;

@end
