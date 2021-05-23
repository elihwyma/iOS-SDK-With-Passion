/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXJSONObject.h>

@class NSString;

@interface SXJSONCollectionContentDisplay : SXJSONObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) struct _SXConvertibleValue minimumWidth;
@property (nonatomic, readonly) struct _SXConvertibleValue maximumWidth;
@property (nonatomic, readonly) struct _SXConvertibleValue gutter;
@property (nonatomic, readonly) struct _SXConvertibleValue rowSpacing;
@property (nonatomic, readonly) unsigned long long alignment;
@property (nonatomic, readonly) unsigned long long distribution;
@property (nonatomic, readonly) unsigned long long widows;
@property (nonatomic, readonly) _Bool variableSizing;

+ (id)typeString;

- (unsigned long long)widowsWithValue:(id)arg1 withType:(int)arg2;
- (unsigned long long)alignmentWithValue:(id)arg1 withType:(int)arg2;
- (unsigned long long)distributionWithValue:(id)arg1 withType:(int)arg2;

@end
