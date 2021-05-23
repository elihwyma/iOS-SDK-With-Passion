/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/_NURenderResult.h>

@class NSString;

@protocol NURenderStatistics;

@interface _NUColorSamplerResult : _NURenderResult

{
    struct CGColor *_color;
    CDStruct_f261e59c _point;
}

@property CDStruct_912cb5d2 point;
@property (retain, nonatomic) struct CGColor *color;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) id <NURenderStatistics> statistics;

- (void)dealloc;

@end
