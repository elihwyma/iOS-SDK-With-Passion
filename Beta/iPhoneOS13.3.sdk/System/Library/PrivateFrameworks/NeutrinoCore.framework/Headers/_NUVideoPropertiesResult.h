/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/_NURenderResult.h>

@class NSString;

@protocol NURenderStatistics, NUVideoProperties;

@interface _NUVideoPropertiesResult : _NURenderResult

{
    id <NUVideoProperties> _properties;
}

@property (retain) id <NUVideoProperties> properties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) id <NURenderStatistics> statistics;

@end
