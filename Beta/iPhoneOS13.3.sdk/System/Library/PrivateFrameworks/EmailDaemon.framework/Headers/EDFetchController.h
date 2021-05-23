/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol EDAccountsProvider;

@interface EDFetchController : NSObject

{
    id <EDAccountsProvider> _accountsProvider;
}

@property (retain, nonatomic) id <EDAccountsProvider> accountsProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)log;

- (id)initWithAccountsProvider:(id)arg1;

@end
