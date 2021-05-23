/*
 Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

#import <Foundation/NSObject.h>

@interface _MPUStackItemReuseCache : NSObject

+ (void)registerStackViewForReuseIdentifier:(id)arg1;
+ (void)unregisterStackViewForReuseIdentifier:(id)arg1;
+ (void)enqueueReusableStackItem:(id)arg1 forReuseIdentifier:(id)arg2;
+ (id)dequeueReusableStackItemWithIdentifier:(id)arg1;

@end
