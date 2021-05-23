/*
 Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

#import <Foundation/NSObject.h>

@protocol OS_os_transaction;

@interface EFProcessTransaction : NSObject

{
    NSObject<OS_os_transaction> *_transaction;
}

+ (id)log;
+ (id)transactionWithDescription:(id)arg1;

- (id)description;
- (void)invalidate;
- (id)initWithDescription:(id)arg1;
- (_Bool)extend;

@end
