/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNXPCTransactionCounter : NSObject {
    unsigned long long  _count;
    NSLock * _countLock;
    NSObject<OS_os_transaction> * _osTransaction;
}

- (void).cxx_destruct;
- (unsigned long long)count;
- (void)dealloc;
- (void)decrement;
- (void)increment:(id)arg1;
- (id)init;

@end