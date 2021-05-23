/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString, SXLayoutOptions;

@interface SXDOMModificationContext : NSObject

{
    SXLayoutOptions *_layoutOptions;
    NSString *_specVersion;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) SXLayoutOptions *layoutOptions;
@property (nonatomic, readonly) NSString *specVersion;

- (id)initWithLayoutOptions:(id)arg1 specVersion:(id)arg2;

@end
