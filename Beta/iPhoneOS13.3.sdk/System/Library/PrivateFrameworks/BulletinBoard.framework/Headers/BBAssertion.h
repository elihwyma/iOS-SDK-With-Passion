/*
 Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol BBAssertionDelegate;

@interface BBAssertion : NSObject

{
    NSString *_identifier;
    unsigned long long _transactionID;
    id <BBAssertionDelegate> _delegate;
}

@property (weak, nonatomic) id <BBAssertionDelegate> delegate;

- (void)dealloc;
- (id)identifier;
- (unsigned long long)transactionID;
- (id)initWithDelegate:(id)arg1 identifier:(id)arg2;
- (void)increaseOrIgnoreTransactionID:(unsigned long long)arg1;

@end
