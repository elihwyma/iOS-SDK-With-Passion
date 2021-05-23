/*
 Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

#import <Foundation/NSFormatter.h>

@class NSString;

@interface HMFPrivateObjectFormatter : NSFormatter

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)defaultFormatter;

- (id)stringForObjectValue:(id)arg1;
- (id)privateStringForObjectValue:(id)arg1;

@end
