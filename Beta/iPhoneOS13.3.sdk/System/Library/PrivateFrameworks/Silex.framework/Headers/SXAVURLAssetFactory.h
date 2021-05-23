/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface SXAVURLAssetFactory : NSObject

{
    NSDictionary *_options;
}

@property (copy, nonatomic, readonly) NSDictionary *options;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithOptions:(id)arg1;
- (id)createURLAssetWithURL:(id)arg1;

@end
