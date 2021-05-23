/*
 Image: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
 */

#import <NSObject.h>

@class HDAssertion;

@interface ACHDatabaseAssertion : NSObject

{
    HDAssertion *_assertion;
}

@property (retain, nonatomic) HDAssertion *assertion;

+ (id)assertionWithDatabase:(id)arg1 identifier:(id)arg2 timeout:(double)arg3 error:(id *)arg4;
+ (id)assertionWithDatabase:(id)arg1 identifier:(id)arg2 error:(id *)arg3;

- (void)dealloc;
- (void)invalidate;
- (id)initWithHDAssertion:(id)arg1;

@end
