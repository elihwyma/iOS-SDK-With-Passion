/*
 Image: /System/Library/PrivateFrameworks/CardKit.framework/CardKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface _CRKBuiltInProvider : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *providerIdentifier;

- (unsigned long long)displayPriorityForCard:(id)arg1;
- (id)cardViewControllerForCard:(id)arg1;

@end
