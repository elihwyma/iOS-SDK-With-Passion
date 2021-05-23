/*
 Image: /System/Library/PrivateFrameworks/IMAssistantCore.framework/IMAssistantCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface IMAssistantAccountDefaultDataSource : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)countryCode;
- (id)imHandleWithID:(id)arg1;
- (_Bool)hasMessagingAccount;

@end
