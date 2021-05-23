/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol NFResolver;

@interface SXResolverComponentViewFactory : NSObject

{
    id <NFResolver> _resolver;
}

@property (nonatomic, readonly) id <NFResolver> resolver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *type;
@property (nonatomic, readonly) int role;

- (id)initWithResolver:(id)arg1;
- (id)componentViewForComponent:(id)arg1;
- (Class)componentViewClass;

@end
