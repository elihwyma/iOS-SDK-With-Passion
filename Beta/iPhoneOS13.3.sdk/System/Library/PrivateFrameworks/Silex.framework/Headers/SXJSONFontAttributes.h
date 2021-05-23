/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXJSONObject.h>

#import <Silex/Swift-Protocol.h>

@class NSString;

@interface SXJSONFontAttributes : SXJSONObject <Swift>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *familyName;
@property (nonatomic, readonly) long long weight;
@property (nonatomic, readonly) long long style;
@property (nonatomic, readonly) long long width;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)weightWithValue:(id)arg1 withType:(int)arg2;
- (long long)widthWithValue:(id)arg1 withType:(int)arg2;
- (long long)styleWithValue:(id)arg1 withType:(int)arg2;

@end
