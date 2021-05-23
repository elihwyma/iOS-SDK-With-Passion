/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

#import <NewsCore/Swift-Protocol.h>

@interface FCAccessCheckResult : NSObject <Swift>

{
    _Bool _canAccess;
    unsigned long long _blockedReason;
}

@property (nonatomic, readonly) _Bool canAccess;
@property (nonatomic, readonly) unsigned long long blockedReason;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCanAccess:(_Bool)arg1 blockedReason:(unsigned long long)arg2;

@end
