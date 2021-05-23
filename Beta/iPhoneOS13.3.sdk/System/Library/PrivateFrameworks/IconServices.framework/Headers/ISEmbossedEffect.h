/*
 Image: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface ISEmbossedEffect : NSObject

{
    double _range;
    struct CGSize _offset;
}

@property struct CGSize offset;
@property double range;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)filterWithBackgroundImage:(id)arg1 inputImage:(id)arg2;

@end
