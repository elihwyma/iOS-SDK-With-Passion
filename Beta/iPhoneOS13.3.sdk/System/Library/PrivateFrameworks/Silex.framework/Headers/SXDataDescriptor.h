/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXJSONObject.h>

@class NSString, SXDataFormat, SXFormattedText;

@interface SXDataDescriptor : SXJSONObject

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *key;
@property (nonatomic, readonly) SXFormattedText *label;
@property (nonatomic, readonly) unsigned long long dataType;
@property (nonatomic, readonly) SXDataFormat *format;

- (id)description;
- (id)formatWithValue:(id)arg1 withType:(int)arg2;
- (id)labelWithValue:(id)arg1 withType:(int)arg2;
- (unsigned long long)dataTypeWithValue:(id)arg1 withType:(int)arg2;

@end
