/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObservationSource.h>

#import <Foundation/Swift-Protocol.h>

@class NSString;

@interface NSObservationTransformer : NSObservationSource <Swift>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)mapValuesWithBlock:(CDUnknownBlockType)arg1;
+ (id)mapErrorsWithBlock:(CDUnknownBlockType)arg1;

@end
