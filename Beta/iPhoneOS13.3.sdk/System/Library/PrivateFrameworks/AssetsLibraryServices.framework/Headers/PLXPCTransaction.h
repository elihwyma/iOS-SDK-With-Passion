/*
 Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

#import <Foundation/NSObject.h>

@protocol OS_os_transaction;

@interface PLXPCTransaction : NSObject

{
    const char *_identifier;
    NSObject<OS_os_transaction> *_transaction;
}

+ (void)initialize;
+ (id)callStackSymbols;
+ (id)transaction:(const char *)arg1;
+ (id)openXPCTransactionStatus;
+ (void)_stopTrackingTransaction:(id)arg1;
+ (void)_startTrackingTransaction:(id)arg1;
+ (void)discardCallStackSymbols:(id)arg1;

- (void)dealloc;
- (id)description;
- (id)initWithIdentifier:(const char *)arg1;
- (id)_statusDescription;
- (void)stillAlive;

@end
