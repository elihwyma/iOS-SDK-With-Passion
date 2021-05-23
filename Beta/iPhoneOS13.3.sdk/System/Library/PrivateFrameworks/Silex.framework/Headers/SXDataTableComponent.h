/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXComponent.h>

@class SXDataRecordStore, SXJSONArray;

@interface SXDataTableComponent : SXComponent

@property (nonatomic, readonly) SXDataRecordStore *data;
@property (nonatomic, readonly) SXJSONArray *sortBy;
@property (nonatomic, readonly) unsigned long long dataOrientation;
@property (nonatomic, readonly) _Bool showDescriptorLabels;

+ (CDUnknownBlockType)valueClassBlockForPropertyWithName:(id)arg1;

- (unsigned long long)dataOrientationWithValue:(id)arg1 withType:(int)arg2;
- (_Bool)showDescriptorLabelsWithValue:(id)arg1 withType:(int)arg2;

@end
