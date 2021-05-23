/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL;

@interface SXWebContentLocationProvider : NSObject

{
    NSURL *_location;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSURL *location;

- (id)initWithLocation:(id)arg1;

@end
