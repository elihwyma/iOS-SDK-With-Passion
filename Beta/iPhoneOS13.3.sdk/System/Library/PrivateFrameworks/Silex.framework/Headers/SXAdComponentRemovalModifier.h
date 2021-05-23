/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SXAdComponentRemovalModifier : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)modifyDOM:(id)arg1 context:(id)arg2;
- (void)removeAdComponentsEmbeddedWithinContainer:(id)arg1 childComponents:(id)arg2;

@end
