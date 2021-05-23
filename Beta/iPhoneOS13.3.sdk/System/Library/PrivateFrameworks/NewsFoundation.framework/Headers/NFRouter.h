/*
 Image: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol NFResolver;

@interface NFRouter : NSObject

{
    id <NFResolver> _resolver;
}

@property (nonatomic, readonly) id <NFResolver> resolver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithResolver:(id)arg1;
- (id)resolveRoutable:(id)arg1;

@end
