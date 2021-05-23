/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXJSONObject.h>

@class NSString, SXJSONArray;

@interface SXListStyle : SXJSONObject

@property (nonatomic, readonly) unsigned long long style;
@property (nonatomic, readonly) NSString *character;
@property (nonatomic, readonly) SXJSONArray *indices;
@property (nonatomic, readonly) unsigned long long depth;

- (unsigned long long)styleWithValue:(id)arg1 withType:(int)arg2;

@end
