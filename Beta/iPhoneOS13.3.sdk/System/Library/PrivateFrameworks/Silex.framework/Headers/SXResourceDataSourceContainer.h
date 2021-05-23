/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SXResourceDataSource;

@interface SXResourceDataSourceContainer : NSObject

{
    id <SXResourceDataSource> _resourceDataSource;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) id <SXResourceDataSource> resourceDataSource;

- (void)registerResourceDataSource:(id)arg1;

@end
