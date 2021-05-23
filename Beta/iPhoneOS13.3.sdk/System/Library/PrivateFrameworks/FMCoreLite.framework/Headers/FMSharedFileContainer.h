/*
 Image: /System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL;

@interface FMSharedFileContainer : NSObject

{
    NSURL *_url;
}

@property (retain, nonatomic) NSURL *url;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)initWithIdentifier:(id)arg1;
- (id)groupContainerURLWithIdentifier:(id)arg1;

@end
