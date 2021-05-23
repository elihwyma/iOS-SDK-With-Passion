/*
 Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface AKFollowUpProviderImpl : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedFollowUpController;

- (_Bool)removeFollowUpItemsWithIdentifiers:(id)arg1 error:(id *)arg2;
- (id)pendingAuthKitFollowUpItems:(id *)arg1;
- (_Bool)removeAllAuthKitFollowUpItems:(id *)arg1;
- (_Bool)addFollowUpItems:(id)arg1 error:(id *)arg2;
- (_Bool)removeFollowUpItems:(id)arg1 error:(id *)arg2;
- (_Bool)clearNotificationsForItem:(id)arg1 error:(id *)arg2;

@end
