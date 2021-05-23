/*
 Image: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
 */

#import <Foundation/NSString.h>

@interface NSString (_PASDistilledString)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_pas_distilledStringClasses;

- (id)_pas_revivedString;
- (id)_pas_distilledString;

@end
