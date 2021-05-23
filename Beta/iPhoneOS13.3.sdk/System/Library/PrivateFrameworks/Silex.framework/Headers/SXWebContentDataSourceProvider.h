/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SXDOMObjectProviding, SXResourceDataSource;

@interface SXWebContentDataSourceProvider : NSObject

{
    id <SXDOMObjectProviding> _DOMObjectProvider;
    id <SXResourceDataSource> _resourceDataSource;
}

@property (nonatomic, readonly) id <SXDOMObjectProviding> DOMObjectProvider;
@property (nonatomic, readonly) id <SXResourceDataSource> resourceDataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)dataSourcesForReferences:(id)arg1;
- (id)initWithDOMObjectProvider:(id)arg1 resourceDataSource:(id)arg2;

@end
