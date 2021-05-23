/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <Foundation/NSObject.h>

#import <NeutrinoCore/Swift-Protocol.h>

@class NSString;

@protocol NURenderStatistics;

@interface _NURenderResult : NSObject <Swift>

{
    id <NURenderStatistics> _statistics;
}

@property (retain) id <NURenderStatistics> statistics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

@end
