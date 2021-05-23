/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface IKAppUserDefaults : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedUserDefaults;

- (id)dataForKey:(id)arg1;
- (void)setData:(id)arg1 forKey:(id)arg2;
- (void)removeDataForKey:(id)arg1;

@end
