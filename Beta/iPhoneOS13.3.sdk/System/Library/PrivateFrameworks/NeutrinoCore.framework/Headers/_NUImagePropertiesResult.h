/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/_NURenderResult.h>

@class NSString;

@protocol NUImageProperties, NURenderStatistics;

@interface _NUImagePropertiesResult : _NURenderResult

{
    id <NUImageProperties> _properties;
}

@property (retain) id <NUImageProperties> properties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) id <NURenderStatistics> statistics;

@end
