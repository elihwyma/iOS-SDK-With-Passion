/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface FMTimedMetadataItem : NSObject

{
    NSString *_identifier;
    NSString *_name;
    NSDictionary *_values;
    CDStruct_e83c9415 _timeRange;
}

@property (readonly) NSString *identifier;
@property (readonly) NSString *name;
@property (readonly) CDStruct_e83c9415 timeRange;
@property (readonly) NSDictionary *values;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 timeRange:(CDStruct_e83c9415)arg3 values:(id)arg4;
- (void)adjustDurationTo:(CDStruct_1b6d18a9)arg1;

@end
