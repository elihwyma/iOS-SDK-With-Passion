/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSArray.h>

@class NSString;

@interface NSArray (HFUtilities)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)hf_arrayWithNumbersInRange:(struct _NSRange)arg1 stride:(unsigned long long)arg2;

- (id)hf_prettyDescription;

@end
