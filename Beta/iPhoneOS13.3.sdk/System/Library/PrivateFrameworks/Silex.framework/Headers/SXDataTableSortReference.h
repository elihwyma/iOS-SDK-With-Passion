/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXJSONObject.h>

@class NSString;

@interface SXDataTableSortReference : SXJSONObject

@property (nonatomic, readonly) NSString *descriptor;
@property (nonatomic, readonly) unsigned long long direction;

- (unsigned long long)directionWithValue:(id)arg1 withType:(int)arg2;

@end
