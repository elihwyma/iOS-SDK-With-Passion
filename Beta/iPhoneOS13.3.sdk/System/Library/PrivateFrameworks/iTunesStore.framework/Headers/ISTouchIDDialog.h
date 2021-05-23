/*
 Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <iTunesStore/ISDialog.h>

@class NSLock, NSString, SSPaymentSheet;

@interface ISTouchIDDialog : ISDialog

{
    NSLock *_lock;
    _Bool _isDualAction;
    _Bool _isFree;
    SSPaymentSheet *_paymentSheet;
    NSString *_body;
    NSString *_username;
}

@property (copy, nonatomic) NSString *body;
@property (copy, nonatomic) NSString *username;
@property (nonatomic) _Bool isFree;
@property (readonly) _Bool isDualAction;
@property (copy) NSString *fallbackExplanation;
@property (copy) NSString *fallbackMessage;

- (void)_init;
- (id)initWithDialogDictionary:(id)arg1;
- (id)paymentSheet;
- (void)_parseDialogDictionary:(id)arg1;
- (id)buttonForButtonType:(long long)arg1;

@end
