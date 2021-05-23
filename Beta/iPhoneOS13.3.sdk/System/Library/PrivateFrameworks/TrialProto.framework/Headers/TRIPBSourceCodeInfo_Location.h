/*
 Image: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
 */

#import <TrialProto/TRIPBMessage.h>

@class NSMutableArray, NSString, TRIPBInt32Array;

@interface TRIPBSourceCodeInfo_Location : TRIPBMessage

@property (retain, nonatomic) TRIPBInt32Array *pathArray;
@property (nonatomic, readonly) unsigned long long pathArray_Count;
@property (retain, nonatomic) TRIPBInt32Array *spanArray;
@property (nonatomic, readonly) unsigned long long spanArray_Count;
@property (copy, nonatomic) NSString *leadingComments;
@property (nonatomic) _Bool hasLeadingComments;
@property (copy, nonatomic) NSString *trailingComments;
@property (nonatomic) _Bool hasTrailingComments;
@property (retain, nonatomic) NSMutableArray *leadingDetachedCommentsArray;
@property (nonatomic, readonly) unsigned long long leadingDetachedCommentsArray_Count;

+ (id)descriptor;

@end
