/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <ContactsFoundation/CNInhibitor.h>

@class NSObject, NSString;

@protocol OS_os_transaction;

@interface _CNOSTransactionInhibitor : CNInhibitor

{
    NSString *_label;
    NSObject<OS_os_transaction> *_transaction;
}

@property (copy, nonatomic, readonly) NSString *label;
@property (nonatomic, readonly) NSObject<OS_os_transaction> *transaction;

- (void)stop;
- (void)start;
- (id)initWithLabel:(id)arg1;

@end
