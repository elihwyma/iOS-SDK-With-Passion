/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol FCAppleAccount;

@interface NUStoreFrontProvider : NSObject

{
    id <FCAppleAccount> _appleAccount;
}

@property (nonatomic, readonly) id <FCAppleAccount> appleAccount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *storeFrontIdentifier;

- (id)initWithAppleAccount:(id)arg1;

@end
