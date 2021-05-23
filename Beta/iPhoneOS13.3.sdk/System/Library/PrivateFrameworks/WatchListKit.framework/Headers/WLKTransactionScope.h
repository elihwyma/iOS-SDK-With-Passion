/*
 Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol OS_os_transaction;

@interface WLKTransactionScope : NSObject

{
    NSObject<OS_os_transaction> *_transaction;
    NSString *_identifier;
    double _delay;
}

@property (readonly) NSObject<OS_os_transaction> *transaction;
@property (copy, readonly) NSString *identifier;
@property (readonly) double delay;

- (id)init;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithIdentifier:(id)arg1 delay:(double)arg2;

@end
