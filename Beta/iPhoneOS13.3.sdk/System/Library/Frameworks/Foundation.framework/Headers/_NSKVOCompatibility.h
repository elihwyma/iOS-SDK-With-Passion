/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface _NSKVOCompatibility : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)_setRequiresSilencingExceptions:(_Bool)arg1;
+ (void)_noteProcessHasUsedKVOSwiftOverlay;

@end
