/*
 Image: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
 */

#import <TrialProto/TRIPBMessage.h>

@class NSMutableArray;

@interface TRIPBMessageOptions : TRIPBMessage

@property (nonatomic) _Bool messageSetWireFormat;
@property (nonatomic) _Bool hasMessageSetWireFormat;
@property (nonatomic) _Bool noStandardDescriptorAccessor;
@property (nonatomic) _Bool hasNoStandardDescriptorAccessor;
@property (nonatomic) _Bool deprecated;
@property (nonatomic) _Bool hasDeprecated;
@property (nonatomic) _Bool mapEntry;
@property (nonatomic) _Bool hasMapEntry;
@property (retain, nonatomic) NSMutableArray *uninterpretedOptionArray;
@property (nonatomic, readonly) unsigned long long uninterpretedOptionArray_Count;

+ (id)descriptor;

@end
